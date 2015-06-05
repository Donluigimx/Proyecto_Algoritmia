#include <QTableWidgetItem>
#include <QMessageBox>
#include "Pasajeros.h"
#include "ui_pasajeros.h"
#include "Pasajero.h"
Pasajeros::Pasajeros(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Pasajeros)
{
    ui->setupUi(this);
}

void Pasajeros::Paso(vector<Vuelo>::iterator it, QWidget* ven)
{
    this->it = it;
    connect(ui->Eliminar,SIGNAL(clicked()),ven,SLOT(Recargars()));
    Recargar();
}

void Pasajeros::Recargar()
{
    for(int i = 0; i < ui->TablaPasajeros->rowCount();){
        delete ui->TablaPasajeros->item(i,0);
        delete ui->TablaPasajeros->item(i,1);
        delete ui->TablaPasajeros->item(i,2);
        ui->TablaPasajeros->removeRow(i);
    }
    vector<Pasajero>::iterator pasajeros = (*it).Pasajeros.begin();
    while(pasajeros != (*it).Pasajeros.end()){
        QTableWidgetItem* Nombre = new QTableWidgetItem();
        QTableWidgetItem* Apellido = new QTableWidgetItem();
        QTableWidgetItem* Asiento = new QTableWidgetItem();
        Nombre->setText(QString::fromStdString((*pasajeros).getNombre()));
        Apellido->setText(QString::fromStdString((*pasajeros).getApellido()));
        Asiento->setText(QString::fromStdString((*pasajeros).getAsiento()));
        Nombre->setFlags(Nombre->flags() ^ Qt::ItemIsEditable);
        Apellido->setFlags(Apellido->flags() ^ Qt::ItemIsEditable);
        Asiento->setFlags(Asiento->flags() ^ Qt::ItemIsEditable);
        Nombre->setTextAlignment(Qt::AlignHCenter);
        Apellido->setTextAlignment(Qt::AlignHCenter);
        Asiento->setTextAlignment(Qt::AlignHCenter);
        const int i = ui->TablaPasajeros->rowCount();
        ui->TablaPasajeros->insertRow(i);
        ui->TablaPasajeros->setItem(i,0,Nombre);
        ui->TablaPasajeros->setItem(i,1,Apellido);
        ui->TablaPasajeros->setItem(i,2,Asiento);
        pasajeros++;
    }
}

Pasajeros::~Pasajeros()
{
    delete ui;
}

void Pasajeros::on_Eliminar_clicked()
{
    int row = 0;
    for (row; row < ui->TablaPasajeros->rowCount(); row++)
    {
        if(ui->TablaPasajeros->item(row,0)->isSelected())
            break;
    }

    if(row == ui->TablaPasajeros->rowCount())
    { QMessageBox::warning(this,"Eliminar","Selecciona un pasajero"); return; }

    if  (QMessageBox::warning(this,"Eliminar","¿Deseas eliminar la reservación?",
        QMessageBox::Yes,QMessageBox::No) == QMessageBox::No) return;

    vector<Pasajero>::iterator pos = (*it).Pasajeros.begin();

    for (pos; pos != (*it).Pasajeros.end(); pos++)
    {
        if  ( (*pos).getNombre() ==
            ui->TablaPasajeros->item(row,0)->text().toStdString() )

            if  ( (*pos).getApellido() ==
                ui->TablaPasajeros->item(row,1)->text().toStdString() )

                if  ( (*pos).getAsiento() ==
                    ui->TablaPasajeros->item(row,2)->text().toStdString())

                    break;
    }

    (*it).Pasajeros.erase(pos);
    (*it).setAsientos_disponibles((*it).getAsientos_disponibles() + 1);
    Recargar();
}

void Pasajeros::on_TablaPasajeros_cellClicked(int row, int column)
{
    ui->TablaPasajeros->item(row,0)->setSelected(true);
    ui->TablaPasajeros->item(row,1)->setSelected(true);
    ui->TablaPasajeros->item(row,2)->setSelected(true);
}

void Pasajeros::on_Ocultar_clicked()
{
    this->close();
}
