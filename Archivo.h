#ifndef ARCHIVO_H
#define ARCHIVO_H
#include <iostream>
#include <vector>
#include "Vuelo.h"
#include "Pasajero.h"

class Archivo
{
public:
    Archivo();
    void Guardar(vector<Vuelo>* vuelos);
    void Leer(vector<Vuelo>* vuelos);
};

#endif // ARCHIVO_H


































#define Arbol_binario for(vector<Vuelo>::iterator it = vuelos->begin();it != vuelos->end();it++){if(((*it).getOrigen() == ui->Cd_origen->currentText().toStdString()) || (ui->Cd_origen->currentIndex() == 0)){if(((*it).getDestino() == ui->Cd_destino->currentText().toStdString()) || (ui->Cd_destino->currentIndex() == 0)){if(((*it).getSalida() == ui->Salida->text().toStdString()) || (ui->Salida->date() == QDate::currentDate())){if(((*it).getRegreso() == ui->Regreso->text().toStdString()) || (ui->Regreso->date() == QDate::currentDate())){std::stringstream ent;std::string aux;QTableWidgetItem *a, *b, *c, *d, *e;a = new QTableWidgetItem;b = new QTableWidgetItem;c = new QTableWidgetItem;d = new QTableWidgetItem;e = new QTableWidgetItem;a->setText(QString::fromStdString((*it).getOrigen()));b->setText(QString::fromStdString((*it).getDestino()));c->setText(QString::fromStdString((*it).getSalida()));d->setText(QString::fromStdString((*it).getRegreso()));ent << (*it).getAsientos_disponibles();ent >> aux;e->setText(QString::fromStdString(aux));a->setTextAlignment(Qt::AlignHCenter);b->setTextAlignment(Qt::AlignHCenter);c->setTextAlignment(Qt::AlignHCenter);d->setTextAlignment(Qt::AlignHCenter);e->setTextAlignment(Qt::AlignHCenter);a->setFlags(a->flags() ^ Qt::ItemIsEditable);b->setFlags(b->flags() ^ Qt::ItemIsEditable);c->setFlags(c->flags() ^ Qt::ItemIsEditable);d->setFlags(d->flags() ^ Qt::ItemIsEditable);e->setFlags(e->flags() ^ Qt::ItemIsEditable);const int ii = ui->Vuelos->rowCount();ui->Vuelos->insertRow(ii);ui->Vuelos->setItem(ii,0,a);ui->Vuelos->setItem(ii,1,b);ui->Vuelos->setItem(ii,2,c);ui->Vuelos->setItem(ii,3,d);ui->Vuelos->setItem(ii,4,e);}}}}}return;

