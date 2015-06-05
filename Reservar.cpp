#include "Reservar.h"
#include "ui_Reservar.h"
#include "Vuelo.h"
#include "Pasajero.h"
#include "Archivo.h"
#include "Ordenamiento.h"
#include "nodoraiz.h"
#include "Grafo.h"
#include <iostream>
#include <sstream>
#include <QDate>
#include <QTableWidgetItem>
#include <QMessageBox>

using namespace std;

Reservar::Reservar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Reservar)
{
    ui->setupUi(this);
    this->setWindowModality(Qt::NonModal);
    ui->Regreso->setDisplayFormat("yyyy/MM/dd");
    ui->Salida->setDisplayFormat("yyyy/MM/dd");
    ui->Salida->setCalendarPopup(true);
    ui->Regreso->setCalendarPopup(true);
    botones.insert(botones.end(),ui->A1);
    botones.insert(botones.end(),ui->A2);
    botones.insert(botones.end(),ui->A3);
    botones.insert(botones.end(),ui->A4);
    botones.insert(botones.end(),ui->A5);
    botones.insert(botones.end(),ui->A6);
    botones.insert(botones.end(),ui->B1);
    botones.insert(botones.end(),ui->B2);
    botones.insert(botones.end(),ui->B3);
    botones.insert(botones.end(),ui->B4);
    botones.insert(botones.end(),ui->B5);
    botones.insert(botones.end(),ui->B6);
    botones.insert(botones.end(),ui->C1);
    botones.insert(botones.end(),ui->C2);
    botones.insert(botones.end(),ui->C3);
    botones.insert(botones.end(),ui->C4);
    botones.insert(botones.end(),ui->C5);
    botones.insert(botones.end(),ui->C6);
    botones.insert(botones.end(),ui->D1);
    botones.insert(botones.end(),ui->D2);
    botones.insert(botones.end(),ui->D3);
    botones.insert(botones.end(),ui->D4);
    botones.insert(botones.end(),ui->D5);
    botones.insert(botones.end(),ui->D6);
    botones.insert(botones.end(),ui->E1);
    botones.insert(botones.end(),ui->E2);
    botones.insert(botones.end(),ui->E3);
    botones.insert(botones.end(),ui->E4);
    botones.insert(botones.end(),ui->E5);
    botones.insert(botones.end(),ui->E6);
    botones.insert(botones.end(),ui->F1);
    botones.insert(botones.end(),ui->F2);
    botones.insert(botones.end(),ui->F3);
    botones.insert(botones.end(),ui->F4);
    botones.insert(botones.end(),ui->F5);
    botones.insert(botones.end(),ui->F6);
    botones.insert(botones.end(),ui->G1);
    botones.insert(botones.end(),ui->G2);
    botones.insert(botones.end(),ui->G3);
    botones.insert(botones.end(),ui->G4);
    botones.insert(botones.end(),ui->G5);
    botones.insert(botones.end(),ui->G6);
    botones.insert(botones.end(),ui->H1);
    botones.insert(botones.end(),ui->H2);
    botones.insert(botones.end(),ui->H3);
    botones.insert(botones.end(),ui->H4);
    botones.insert(botones.end(),ui->H5);
    botones.insert(botones.end(),ui->H6);
    botones.insert(botones.end(),ui->I1);
    botones.insert(botones.end(),ui->I2);
    botones.insert(botones.end(),ui->I3);
    botones.insert(botones.end(),ui->I4);
    botones.insert(botones.end(),ui->I5);
    botones.insert(botones.end(),ui->I6);
    botones.insert(botones.end(),ui->J1);
    botones.insert(botones.end(),ui->J2);
    botones.insert(botones.end(),ui->J3);
    botones.insert(botones.end(),ui->J4);
    botones.insert(botones.end(),ui->J5);
    botones.insert(botones.end(),ui->J6);
}

Reservar::~Reservar()
{
    delete ui;
}

void Reservar::Ligar(vector<Vuelo> *paso, Pasajeros* ventanita)
{
    vuelos = paso;
    this->ventanita = ventanita;
    if(ui->Cd_origen->currentIndex() <= 0){
        ui->Cd_destino->setDisabled(true);
        ui->Salida->setDisabled(true);
        ui->Regreso->setDisabled(true);
    }
    ui->Salida->setDate(QDate::currentDate());
    ui->Regreso->setDate(QDate::currentDate());
}

void Reservar::Busqueda(NodoRaiz<Vuelo> *nodo){                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             Arbol_binario;
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
                    const int ii = ui->Vuelos->rowCount();
                    ui->Vuelos->insertRow(ii);
                    ui->Vuelos->setItem(ii,0,a);
                    ui->Vuelos->setItem(ii,1,b);
                    ui->Vuelos->setItem(ii,2,c);
                    ui->Vuelos->setItem(ii,3,d);
                    ui->Vuelos->setItem(ii,4,e);
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

void Reservar::Recargar()
{
    if(vuelos == NULL)
        return;
    for(int i = 0; i < ui->Vuelos->rowCount();)
    {
        delete ui->Vuelos->item(i,0);
        delete ui->Vuelos->item(i,1);
        delete ui->Vuelos->item(i,2);
        delete ui->Vuelos->item(i,3);
        delete ui->Vuelos->item(i,4);
        ui->Vuelos->removeRow(i);
    }
    arbol.Anula();
    for(vector<Vuelo>::iterator it = vuelos->begin(); it != vuelos->end(); it++)
       arbol.Inserta((*it));
    Busqueda(arbol.Raiz());
    asi = "";
    /*
    if(ui->Vuelos->rowCount() > 2)
    {
        int i = ui->Vuelos->rowCount()-1;
        delete ui->Vuelos->item(i,0);
        delete ui->Vuelos->item(i,1);
        delete ui->Vuelos->item(i,2);
        delete ui->Vuelos->item(i,3);
        delete ui->Vuelos->item(i,4);
        ui->Vuelos->removeRow(i);
        cout << "as" << endl;
    }
    */
    Asiento_Seleccionado(NULL);
}

void Reservar::Recargars()
{
    if(vuelos == NULL)
        return;
    for(int i = 0; i < ui->Vuelos->rowCount();)
    {
        delete ui->Vuelos->item(i,0);
        delete ui->Vuelos->item(i,1);
        delete ui->Vuelos->item(i,2);
        delete ui->Vuelos->item(i,3);
        delete ui->Vuelos->item(i,4);
        ui->Vuelos->removeRow(i);
    }
    arbol.Anula();
    for(vector<Vuelo>::iterator it = vuelos->begin(); it != vuelos->end(); it++)
       arbol.Inserta((*it));
    Busqueda(arbol.Raiz());
    asi = "";
    Asiento_Seleccionado(NULL);
}

void Reservar::on_Vuelos_cellClicked(int row, int column)
{
    (void)column;
    ui->Vuelos->item(row,0)->setSelected(true);
    ui->Vuelos->item(row,1)->setSelected(true);
    ui->Vuelos->item(row,2)->setSelected(true);
    ui->Vuelos->item(row,3)->setSelected(true);
    ui->Vuelos->item(row,4)->setSelected(true);
    Recargar_Asientos(row);
    on_Vuelos_cellDoubleClicked(row,-1);
}

void Reservar::on_Cd_origen_currentIndexChanged(int index) {
    Recargar();
    if(index > 0)
        ui->Cd_destino->setEnabled(true);
    else{
        ui->Cd_destino->setDisabled(true);
        ui->Salida->setDisabled(true);
        ui->Regreso->setDisabled(true);
        ui->Cd_destino->setCurrentIndex(0);
        ui->Salida->setDate(QDate::currentDate());
        ui->Regreso->setDate(QDate::currentDate());
    }
}

void Reservar::on_Cd_destino_currentIndexChanged(int index) {
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

void Reservar::on_Salida_dateChanged(const QDate &date) { Recargar(); (void)date; }

void Reservar::on_Regreso_dateChanged(const QDate &date) { Recargar(); (void)date; }

void Reservar::Asiento_Seleccionado(QPushButton *lugar)
{
    vector<QPushButton*>::iterator it = botones.begin();
    while(it != botones.end()){
        (*it)->setChecked(false);
        it++;
    }
    if(lugar != NULL)
    {
        lugar->setChecked(true);
        asi = lugar->text();
    }
    else
        asi = "";
}

void Reservar::Recargar_Asientos(int at)
{
    for(vector<QPushButton*>::iterator it = botones.begin(); it != botones.end();it++){
        (*it)->setEnabled(true);
    }

    vector<Pasajero>::iterator it = vuelos->at(at).Pasajeros.begin();

    while(it != vuelos->at(at).Pasajeros.end() ){

        for(vector<QPushButton*>::iterator bo = botones.begin();bo != botones.end();bo++){
            if((*bo)->text().toStdString() == (*it).getAsiento()){
                (*bo)->setDisabled(true);
                break;
            }
        }

        it++;
    }
    Asiento_Seleccionado(NULL);
}

void Reservar::on_A1_clicked(){ Asiento_Seleccionado(ui->A1); }
void Reservar::on_A2_clicked(){ Asiento_Seleccionado(ui->A2); }
void Reservar::on_A3_clicked(){ Asiento_Seleccionado(ui->A3); }
void Reservar::on_A4_clicked(){ Asiento_Seleccionado(ui->A4); }
void Reservar::on_A5_clicked(){ Asiento_Seleccionado(ui->A5); }
void Reservar::on_A6_clicked(){ Asiento_Seleccionado(ui->A6); }
void Reservar::on_B1_clicked(){ Asiento_Seleccionado(ui->B1); }
void Reservar::on_B2_clicked(){ Asiento_Seleccionado(ui->B2); }
void Reservar::on_B3_clicked(){ Asiento_Seleccionado(ui->B3); }
void Reservar::on_B4_clicked(){ Asiento_Seleccionado(ui->B4); }
void Reservar::on_B5_clicked(){ Asiento_Seleccionado(ui->B5); }
void Reservar::on_B6_clicked(){ Asiento_Seleccionado(ui->B6); }
void Reservar::on_C1_clicked(){ Asiento_Seleccionado(ui->C1); }
void Reservar::on_C2_clicked(){ Asiento_Seleccionado(ui->C2); }
void Reservar::on_C3_clicked(){ Asiento_Seleccionado(ui->C3); }
void Reservar::on_C4_clicked(){ Asiento_Seleccionado(ui->C4); }
void Reservar::on_C5_clicked(){ Asiento_Seleccionado(ui->C5); }
void Reservar::on_C6_clicked(){ Asiento_Seleccionado(ui->C6); }
void Reservar::on_D1_clicked(){ Asiento_Seleccionado(ui->D1); }
void Reservar::on_D2_clicked(){ Asiento_Seleccionado(ui->D2); }
void Reservar::on_D3_clicked(){ Asiento_Seleccionado(ui->D3); }
void Reservar::on_D4_clicked(){ Asiento_Seleccionado(ui->D4); }
void Reservar::on_D5_clicked(){ Asiento_Seleccionado(ui->D5); }
void Reservar::on_D6_clicked(){ Asiento_Seleccionado(ui->D6); }
void Reservar::on_E1_clicked(){ Asiento_Seleccionado(ui->E1); }
void Reservar::on_E2_clicked(){ Asiento_Seleccionado(ui->E2); }
void Reservar::on_E3_clicked(){ Asiento_Seleccionado(ui->E3); }
void Reservar::on_E4_clicked(){ Asiento_Seleccionado(ui->E4); }
void Reservar::on_E5_clicked(){ Asiento_Seleccionado(ui->E5); }
void Reservar::on_E6_clicked(){ Asiento_Seleccionado(ui->E6); }
void Reservar::on_F1_clicked(){ Asiento_Seleccionado(ui->F1); }
void Reservar::on_F2_clicked(){ Asiento_Seleccionado(ui->F2); }
void Reservar::on_F3_clicked(){ Asiento_Seleccionado(ui->F3); }
void Reservar::on_F4_clicked(){ Asiento_Seleccionado(ui->F4); }
void Reservar::on_F5_clicked(){ Asiento_Seleccionado(ui->F5); }
void Reservar::on_F6_clicked(){ Asiento_Seleccionado(ui->F6); }
void Reservar::on_G1_clicked(){ Asiento_Seleccionado(ui->G1); }
void Reservar::on_G2_clicked(){ Asiento_Seleccionado(ui->G2); }
void Reservar::on_G3_clicked(){ Asiento_Seleccionado(ui->G3); }
void Reservar::on_G4_clicked(){ Asiento_Seleccionado(ui->G4); }
void Reservar::on_G5_clicked(){ Asiento_Seleccionado(ui->G5); }
void Reservar::on_G6_clicked(){ Asiento_Seleccionado(ui->G6); }
void Reservar::on_H1_clicked(){ Asiento_Seleccionado(ui->H1); }
void Reservar::on_H2_clicked(){ Asiento_Seleccionado(ui->H2); }
void Reservar::on_H3_clicked(){ Asiento_Seleccionado(ui->H3); }
void Reservar::on_H4_clicked(){ Asiento_Seleccionado(ui->H4); }
void Reservar::on_H5_clicked(){ Asiento_Seleccionado(ui->H5); }
void Reservar::on_H6_clicked(){ Asiento_Seleccionado(ui->H6); }
void Reservar::on_I1_clicked(){ Asiento_Seleccionado(ui->I1); }
void Reservar::on_I2_clicked(){ Asiento_Seleccionado(ui->I2); }
void Reservar::on_I3_clicked(){ Asiento_Seleccionado(ui->I3); }
void Reservar::on_I4_clicked(){ Asiento_Seleccionado(ui->I4); }
void Reservar::on_I5_clicked(){ Asiento_Seleccionado(ui->I5); }
void Reservar::on_I6_clicked(){ Asiento_Seleccionado(ui->I6); }
void Reservar::on_J1_clicked(){ Asiento_Seleccionado(ui->J1); }
void Reservar::on_J2_clicked(){ Asiento_Seleccionado(ui->J2); }
void Reservar::on_J3_clicked(){ Asiento_Seleccionado(ui->J3); }
void Reservar::on_J4_clicked(){ Asiento_Seleccionado(ui->J4); }
void Reservar::on_J5_clicked(){ Asiento_Seleccionado(ui->J5); }
void Reservar::on_J6_clicked(){ Asiento_Seleccionado(ui->J6); }

void Reservar::on_BReservar_clicked()
{
    int posicion = 0;
    int linea = 0;
    Pasajero buff;

    if(ui->Nombre->text() == ""){ QMessageBox::warning(this,"Error","Ingresa un Nombre"); return; }
    if(ui->Apellido->text() == ""){ QMessageBox::warning(this,"Error","Ingresa Apellido"); return; }
    if(ui->Edad->value() == 0){ QMessageBox::warning(this,"Error","Ingresa la edad"); return; }
    if(asi == ""){ QMessageBox::warning(this,"Error","Selecciona un asiento"); return; }
    for(;linea < ui->Vuelos->rowCount();linea++)
    {
        if(ui->Vuelos->item(linea,0)->isSelected()) break;
    }

    if(linea == ui->Vuelos->rowCount()){ QMessageBox::warning(this,"Error","No has seleccionado ningún vuelo"); return; }

    if(QMessageBox::warning(this,"Reservación","¿Deseas reservarlo?",QMessageBox::Yes,QMessageBox::No)==QMessageBox::Yes)
    {

        for(;posicion < (int)vuelos->size();posicion++)
        {
            if(vuelos->at(posicion).getDestino() == ui->Vuelos->item(linea,1)->text().toStdString())
            {
                if(vuelos->at(posicion).getOrigen() == ui->Vuelos->item(linea,0)->text().toStdString())
                {
                    if(vuelos->at(posicion).getSalida() == ui->Vuelos->item(linea,2)->text().toStdString())
                    {
                        if(vuelos->at(posicion).getRegreso() == ui->Vuelos->item(linea,3)->text().toStdString())
                        {
                            break;
                        }
                    }
                }
            }
        }

    }

    buff.setNombre(ui->Nombre->text().toStdString());
    buff.setApellido(ui->Apellido->text().toStdString());
    buff.setDestino(ui->Vuelos->item(linea,1)->text().toStdString());
    buff.setOrigen(ui->Vuelos->item(linea,0)->text().toStdString());
    buff.setAsiento(asi.toStdString());
    buff.setEdad(ui->Edad->value());

    vuelos->at(posicion).setAsientos_disponibles(vuelos->at(posicion).getAsientos_disponibles() - 1);
    vuelos->at(posicion).Pasajeros.insert(vuelos->at(posicion).Pasajeros.end(),buff);

    Archivo archivo;
    archivo.Guardar(vuelos);

    ui->Nombre->setText("");
    ui->Apellido->setText("");
    ui->Edad->setValue(0);
    ui->Cd_origen->setCurrentIndex(0);
    ui->Cd_destino->setCurrentIndex(0);
    ui->Salida->setDate(QDate::currentDate());
    ui->Regreso->setDate(QDate::currentDate());

    QMessageBox::information(this,"Satisfactorio","Se ha capturado al pasajero satisfactoriamente");
    ventanita->close();
    Recargar();
}

void Reservar::on_PSalida_clicked()
{
    Ordenamiento ordena;
    cout << vuelos->size()-1 << endl;
    cout << ui->Vuelos->rowCount() - 1 << endl;
    ordena.Merge_Sort_Salida(vuelos,0,ui->Vuelos->rowCount()-1);
    Recargar();
}

void Reservar::on_BLimpiar_clicked()
{
    ui->Nombre->setText("");
    ui->Apellido->setText("");
    ui->Edad->setValue(0);
    ui->Cd_origen->setCurrentIndex(0);
    ui->Cd_destino->setCurrentIndex(0);
    ui->Salida->setDate(QDate::currentDate());
    ui->Regreso->setDate(QDate::currentDate());
}

void Reservar::on_PAsientos_clicked()
{
    Ordenamiento ordena;
    cout << vuelos->size()-1 << endl;
    cout << ui->Vuelos->rowCount() - 1 << endl;
    ordena.Merge_Sort_Asientos(vuelos,0,ui->Vuelos->rowCount()-1);
    Recargar();
}

void Reservar::on_Vuelos_cellDoubleClicked(int row, int column)
{
    string Origen = ui->Vuelos->item(row,0)->text().toStdString();
    string Destino = ui->Vuelos->item(row,1)->text().toStdString();
    string Salida = ui->Vuelos->item(row,2)->text().toStdString();
    string Regreso = ui->Vuelos->item(row,3)->text().toStdString();
    vector<Vuelo>::iterator it = vuelos->begin();
    while(it != vuelos->end()){
        if((*it).getOrigen() == Origen){
            if((*it).getDestino() == Destino){
                if((*it).getSalida() == Salida){
                    if((*it).getRegreso() == Regreso){
                        ventanita->Paso(it,this);
                    }
                }
            }
        }
        it++;
    }
    if(column >= 0) ventanita->show();
}
