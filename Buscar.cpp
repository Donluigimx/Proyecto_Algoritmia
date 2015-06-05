#include <iostream>
#include <sstream>
#include <QMessageBox>
#include "Buscar.h"
#include "ui_Buscar.h"
#include "arbol_binario.h"
#include "Archivo.h"

using namespace std;

Buscar::Buscar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Buscar)
{
    ui->setupUi(this);
    ui->Regreso->setCalendarPopup(true);
    ui->Salida->setCalendarPopup(true);
    ui->Regreso->setDisplayFormat("yyyy/MM/dd");
    ui->Salida->setDisplayFormat("yyyy/MM/dd");
}

Buscar::~Buscar()
{
    delete ui;
}

void Buscar::Ligar(vector<Vuelo> *paso)
{
    vuelos = paso;
}

void Buscar::Recargar(){

    if(vuelos == NULL)
        return;
    BusquedaPasajero();
    for(int i = 0; i < ui->TablaVuelos->rowCount();)
    {
        delete ui->TablaVuelos->item(i,0);
        delete ui->TablaVuelos->item(i,1);
        delete ui->TablaVuelos->item(i,2);
        delete ui->TablaVuelos->item(i,3);
        delete ui->TablaVuelos->item(i,4);
        delete ui->TablaVuelos->item(i,5);
        ui->TablaVuelos->removeRow(i);
    }
    arbol.Anula();
    //vector<Vuelo>::iterator end = vuelos->end();
    for( vector<Vuelo>::iterator it = vuelos->begin(); it != vuelos->end(); it++ )
        arbol.Inserta((*it));
    Busqueda(arbol.Raiz());
    if(ui->TablaVuelos->rowCount() > 2)
    {
        int i = ui->TablaVuelos->rowCount()-1;
        delete ui->TablaVuelos->item(i,0);
        delete ui->TablaVuelos->item(i,1);
        delete ui->TablaVuelos->item(i,2);
        delete ui->TablaVuelos->item(i,3);
        delete ui->TablaVuelos->item(i,4);
        delete ui->TablaVuelos->item(i,5);
        ui->TablaVuelos->removeRow(i);
        cout << "as" << endl;
    }
}

void Buscar::Busqueda(NodoRaiz<Vuelo>* nodo){
    if(nodo == NULL)
        return;

    if((nodo->getDato().getOrigen() == ui->Cd_origen->currentText().toStdString()) || (ui->Cd_origen->currentIndex() == 0))
    {
        if((nodo->getDato().getDestino() == ui->Cd_destino->currentText().toStdString()) || (ui->Cd_destino->currentIndex() == 0))
        {
            if((nodo->getDato().getSalida() == ui->Salida->text().toStdString()) || (ui->Salida->date() == QDate::currentDate()))
            {
                if((nodo->getDato().getRegreso() == ui->Regreso->text().toStdString()) || (ui->Regreso->date() == QDate::currentDate()))
                {
                    std::stringstream ent;
                    std::string aux;
                    QTableWidgetItem *a, *b, *c, *d, *e;
                    a = new QTableWidgetItem;
                    b = new QTableWidgetItem;
                    c = new QTableWidgetItem;
                    d = new QTableWidgetItem;
                    e = new QTableWidgetItem;
                    a->setText(QString::fromStdString(nodo->getDato().getOrigen()));
                    b->setText(QString::fromStdString(nodo->getDato().getDestino()));
                    c->setText(QString::fromStdString(nodo->getDato().getSalida()));
                    d->setText(QString::fromStdString(nodo->getDato().getRegreso()));
                    ent << nodo->getDato().getAsientos_disponibles();
                    ent >> aux;
                    e->setText(QString::fromStdString(aux));
                    a->setTextAlignment(Qt::AlignHCenter);
                    b->setTextAlignment(Qt::AlignHCenter);
                    c->setTextAlignment(Qt::AlignHCenter);
                    d->setTextAlignment(Qt::AlignHCenter);
                    e->setTextAlignment(Qt::AlignHCenter);
                    a->setFlags(a->flags() ^ Qt::ItemIsEditable);
                    b->setFlags(b->flags() ^ Qt::ItemIsEditable);
                    c->setFlags(c->flags() ^ Qt::ItemIsEditable);
                    d->setFlags(d->flags() ^ Qt::ItemIsEditable);
                    e->setFlags(e->flags() ^ Qt::ItemIsEditable);
                    const int ii = ui->TablaVuelos->rowCount();
                    ui->TablaVuelos->insertRow(ii);
                    ui->TablaVuelos->setItem(ii,0,a);
                    ui->TablaVuelos->setItem(ii,1,b);
                    ui->TablaVuelos->setItem(ii,2,c);
                    ui->TablaVuelos->setItem(ii,3,d);
                    ui->TablaVuelos->setItem(ii,4,e);

                }
            }
        }
        Busqueda(nodo->getIzq());
        Busqueda(nodo->getDer());
    }
    if(nodo->getDato().getOrigen() < ui->Cd_origen->currentText().toStdString())
        Busqueda(nodo->getDer());
    else
        Busqueda(nodo->getIzq());
}

void Buscar::Mostrar()
{
    this->show();
    Recargar();
    ui->Cd_destino->setCurrentIndex(0);
    ui->Cd_origen->setCurrentIndex(0);
    ui->Salida->setDate(QDate::currentDate());
    ui->Regreso->setDate(QDate::currentDate());
    if(ui->Cd_origen->currentIndex() > 0)
        ui->Cd_destino->setEnabled(true);
    else{
        ui->Cd_destino->setDisabled(true);
    }
    ui->Salida->setDisabled(true);
    ui->Regreso->setDisabled(true);
}

void Buscar::on_Cd_origen_currentIndexChanged(int index)
{
    Recargar();
    if(index > 0)
        ui->Cd_destino->setEnabled(true);
    else{
        ui->Cd_destino->setDisabled(true);
        ui->Cd_destino->setCurrentIndex(0);
        ui->Salida->setDisabled(true);
        ui->Regreso->setDisabled(true);
        ui->Salida->setDate(QDate::currentDate());
        ui->Regreso->setDate(QDate::currentDate());
    }
}

void Buscar::on_Cd_destino_currentIndexChanged(int index)
{
    Recargar();
    if(index > 0){
        ui->Salida->setEnabled(true);
        ui->Regreso->setEnabled(true);
    }
    else{
        ui->Salida->setDisabled(true);
        ui->Regreso->setDisabled(true);
        ui->Salida->setDate(QDate::currentDate());
        ui->Regreso->setDate(QDate::currentDate());
    }
}

void Buscar::on_TablaVuelos_cellClicked(int row, int column)
{
    column = column;
    ui->TablaVuelos->item(row,0)->setSelected(true);
    ui->TablaVuelos->item(row,1)->setSelected(true);
    ui->TablaVuelos->item(row,2)->setSelected(true);
    ui->TablaVuelos->item(row,3)->setSelected(true);
    ui->TablaVuelos->item(row,4)->setSelected(true);
}

void Buscar::BusquedaPasajero()
{
    for(int i = 0; i < ui->TablaPasajeros->rowCount();)
    {
        delete ui->TablaPasajeros->item(i,0);
        delete ui->TablaPasajeros->item(i,1);
        delete ui->TablaPasajeros->item(i,2);

        ui->TablaPasajeros->removeRow(i);
    }
    for(unsigned int i = 0; i < vuelos->size();i++)
    {
        for (unsigned int j = 0; j < vuelos->at(i).Pasajeros.size();j++)
        {
            string no;
            no = vuelos->at(i).Pasajeros[j].getNombre();
            no.insert(no.end(),' ');
            no.insert(no.size(),vuelos->at(i).Pasajeros[j].getApellido());

            if(     ui->Nombre->text() == "" ||
                    no.find(ui->Nombre->text().toStdString()) != string::npos)
            {
                QTableWidgetItem* b = new QTableWidgetItem;
                QTableWidgetItem* c = new QTableWidgetItem;

                string vu;
                vu = vuelos->at(i).getOrigen();
                vu.insert(vu.size()," | ");
                vu.insert(vu.size(),vuelos->at(i).getDestino());

                b->setFlags(b->flags() ^ (Qt::ItemIsEditable | Qt::ItemIsSelectable));
                c->setFlags(c->flags() ^ (Qt::ItemIsEditable | Qt::ItemIsSelectable));

                b->setText(QString::fromStdString(no));
                c->setText(QString::fromStdString(vu));

                const int ii = ui->TablaPasajeros->rowCount();

                ui->TablaPasajeros->insertRow(ii);

                ui->TablaPasajeros->setItem(ii,0,b);
                ui->TablaPasajeros->setItem(ii,1,c);
            }
        }
    }
}

void Buscar::on_Nombre_textEdited(const QString &arg1)
{
    (void)arg1;
    BusquedaPasajero();
}

void Buscar::on_EliminarVuelo_clicked()
{

    int row = 0;
    vector<Vuelo>::iterator pos = vuelos->begin();

    for (; row < ui->TablaVuelos->rowCount(); row++)
    {
        if(ui->TablaVuelos->item(row,0)->isSelected())
            break;
    }

    if(row == ui->TablaVuelos->rowCount())
    { QMessageBox::warning(this,"Eliminar","Selecciona un vuelo"); return; }

    if(QMessageBox::warning(this,"Eliminar","¿Deseas eliminar el vuelo?",
       QMessageBox::Yes,QMessageBox::No) == QMessageBox::No) return;

    for (; pos != vuelos->end(); pos++)
    {
        if  (ui->TablaVuelos->item(row,0)->text().toStdString() ==
            (*pos).getOrigen())
        {
            if  (ui->TablaVuelos->item(row,1)->text().toStdString() ==
                (*pos).getDestino())
            {
                if  (ui->TablaVuelos->item(row,2)->text().toStdString() ==
                    (*pos).getSalida())
                {
                    if  (ui->TablaVuelos->item(row,3)->text().toStdString() ==
                        (*pos).getRegreso())
                    {
                        break;
                    }
                }
            }
        }
    }

    vuelos->erase(pos);
    ui->TablaVuelos->removeRow(row);
    Archivo archi;
    archi.Guardar(vuelos);
    BusquedaPasajero();
}

void Buscar::on_Salida_dateChanged(const QDate &date)
{
    (void) date;
    Recargar();
}

void Buscar::on_Regreso_dateChanged(const QDate &date)
{
    (void) date;
    Recargar();
}
