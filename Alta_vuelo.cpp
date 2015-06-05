#include <QMessageBox>
#include <QDate>
#include <ctime>
#include <sstream>
#include <sys/time.h>
#include <cstdio>
#include <vector>
#include "Alta_vuelo.h"
#include "ui_Alta_vuelo.h"
#include "Vuelo.h"
#include "Archivo.h"
#include "Grafo.h"
#define DELIM '*'

Alta_vuelo::Alta_vuelo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Alta_vuelo)
{
    ui->setupUi(this);
    ui->Salida->setCalendarPopup(true);
    ui->Regreso->setCalendarPopup(true);
    ui->Pasajeros->setMaximum(60);
    ui->Pasajeros->setMinimum(30);
    ui->Distancia->setMaximum(999999);
    ui->Salida->setDate(QDate::currentDate());
    ui->Regreso->setDate(QDate::currentDate());
    ui->Regreso->setDisplayFormat("yyyy/MM/dd");
    ui->Salida->setDisplayFormat("yyyy/MM/dd");
    ui->Destino->setDisabled(true);
    ui->Distancia->setAlignment(Qt::AlignHCenter);
    ui->Distancia->setFocusPolicy(Qt::NoFocus);
    nombres.push_back("México - Guadalajara");
    nombres.push_back("México - D.F.");
    nombres.push_back("Canada - Montreal");
    nombres.push_back("USA - New York");
    nombres.push_back("USA - Kansas");
    nombres.push_back("Brasil - Brazilia");
    nombres.push_back("Inglaterra - Londres");
    grafo.Inicializa(7);
    grafo.Adyacente(0,1,500);
    grafo.Adyacente(1,4,2600);
    grafo.Adyacente(1,5,6800);
    grafo.Adyacente(4,0,2500);
    grafo.Adyacente(4,2,1900);
    grafo.Adyacente(3,1,4100);
    grafo.Adyacente(3,4,1700);
    grafo.Adyacente(2,3,550);
    grafo.Adyacente(2,6,5200);
    grafo.Adyacente(6,3,5500);
    grafo.Adyacente(5,3,6800);
    grafo.Adyacente(5,0,7200);
}

Alta_vuelo::~Alta_vuelo()
{
    delete ui;
}

void Alta_vuelo::Ligar(vector<Vuelo> *paso)
{
    vuelos = paso;
}

bool Alta_vuelo::eventFilter(QObject *o, QEvent *e)
{
    if (o == ui->Distancia && e->type() == QEvent::KeyPress)
    {
        e->ignore();
        return true;
    }
    return QWidget::eventFilter(o, e);
}

void Alta_vuelo::on_Alta_clicked()
{
    Vuelo aux;

    if(ui->Origen->currentIndex() == 0)
    {
        QMessageBox::information(this,"Error","Debes de seleccionar una ciudad de Origen");
        return;
    }
    if(ui->Destino->currentIndex() == 0)
    {
        QMessageBox::information(this,"Error","Debes de seleccionar una ciudad de Destino");
        return;
    }
    if(ui->Distancia->value() == 0)
    {
        QMessageBox::information(this,"Error","La distancia debe ser mayor a 0");
        return;
    }
    if(ui->Capacidad->value() == 0)
    {
        QMessageBox::information(this,"Error","La capacidad debe ser mayor a 0");
        return;
    }
    if(ui->Origen->currentIndex()==ui->Destino->currentIndex())
    {
        QMessageBox::information(this,"Error","La ciudad Destino y de Origen deben de ser distintas");
        return;
    }
    if(QMessageBox::warning(this,"Alta","¿Deseas dar de alta el vuelo?",QMessageBox::Yes,QMessageBox::No)==QMessageBox::Yes)
    {
        aux.setAsientos_disponibles(ui->Pasajeros->value());
        aux.setCapacidad_carga(ui->Capacidad->value());
        aux.setCapacidad_pasajero(ui->Pasajeros->value());
        aux.setDestino(ui->Destino->currentText().toStdString());
        aux.setDistancia(ui->Distancia->value());
        aux.setOrigen(ui->Origen->currentText().toStdString());
        aux.setRegreso(ui->Regreso->text().toStdString());
        aux.setSalida(ui->Salida->text().toStdString());
        string auxs;
        int *a = grafo.getPrevio();
        int src = ui->Destino->currentIndex() - 1;
        src = a[src];
        while(a[src] != -1)
        {
            auxs.insert(auxs.size(),nombres[src]);
            auxs.insert(auxs.end(),DELIM);
            src = a[src];
        }
        //cout << auxs << endl;
        aux.setRuta(auxs);
        vuelos->insert(vuelos->end(),aux);
        Archivo archivo;
        archivo.Guardar(vuelos);
        QMessageBox::information(this,"Alta satisfactoria","Alta satisfactoria");
        on_Limpiar_clicked();
    }
}

void Alta_vuelo::on_Origen_currentIndexChanged(int index)
{
    for(int i = 0; i != ui->tableWidget->rowCount();)
    {
        delete ui->tableWidget->item(i,0);
        ui->tableWidget->removeRow(i);
    }
    if(index == 0)
    {
        ui->Distancia->setValue(0);
        ui->Destino->setCurrentIndex(0);
        ui->Destino->setDisabled(true);
        return;
    }
    ui->Destino->setEnabled(true);
    if(index != 0){
        grafo.Dijkstra(index-1);
    }
    if(ui->Destino->currentIndex() != 0 && index != 0){
        ui->Distancia->setValue(grafo.getDistancia()[ui->Destino->currentIndex()-1]);
        if(ui->Origen->currentIndex() == ui->Destino->currentIndex()) return;
        int *a = grafo.getPrevio();
        int src = ui->Destino->currentIndex() - 1;
        src = a[src];
        while(a[src] != -1)
        {
            QTableWidgetItem* b = new QTableWidgetItem;
            b->setText(QString::fromStdString(nombres[src]));
            b->setFlags(b->flags() ^ Qt::ItemIsEditable);
            b->setTextAlignment(Qt::AlignHCenter);
            ui->tableWidget->insertRow(0);
            ui->tableWidget->setItem(0,0,b);
            src = a[src];
        }
    }
}
void Alta_vuelo::on_Destino_currentIndexChanged(int index)
{
    for(int i = 0; i != ui->tableWidget->rowCount();)
    {
        delete ui->tableWidget->item(i,0);
        ui->tableWidget->removeRow(i);
    }
    if(index == 0)
    {
        ui->Distancia->setValue(0);
        return;
    }

    if(ui->Origen->currentIndex() != 0 && index != 0){
        ui->Distancia->setValue(grafo.getDistancia()[index-1]);
        if(ui->Origen->currentIndex() == ui->Destino->currentIndex()) return;
        int *a = grafo.getPrevio();
        int src = ui->Destino->currentIndex() - 1;
        src = a[src];
        while(a[src] != -1)
        {
            QTableWidgetItem* b = new QTableWidgetItem;
            b->setText(QString::fromStdString(nombres[src]));
            b->setFlags(b->flags() ^ Qt::ItemIsEditable);
            b->setTextAlignment(Qt::AlignHCenter);
            ui->tableWidget->insertRow(0);
            ui->tableWidget->setItem(0,0,b);
            src = a[src];
        }
    }
}

void Alta_vuelo::on_Distancia_valueChanged(int arg1)
{
    (void)arg1;
    if(ui->Origen->currentIndex() != 0 && ui->Destino->currentIndex() != 0)
        ui->Distancia->setValue(grafo.getDistancia()[ui->Destino->currentIndex()-1]);

    else
        ui->Distancia->setValue(0);
}

void Alta_vuelo::on_Limpiar_clicked()
{
    ui->Origen->setCurrentIndex(0);
    ui->Capacidad->setValue(0);
    ui->Salida->setDate(QDate::currentDate());
    ui->Regreso->setDate(QDate::currentDate());
    ui->Pasajeros->setValue(30);
}
