#include "MenuPrincipal.h"
#include "ui_MenuPrincipal.h"
#include "Reservar.h"
#include "Buscar.h"
#include "Archivo.h"
#include <QMessageBox>
MenuPrincipal::MenuPrincipal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MenuPrincipal)
{
    ui->setupUi(this);
    reservaciones = new Reservar(this);
    reservaciones->move(210,0);
    altav = new Alta_vuelo(this);
    altav->move(210,0);
    altav->hide();
    buscador = new Buscar(this);
    buscador->move(210,0);
    buscador->hide();
    this->move(50,100);
    ventanita = new Pasajeros();
    ventanita->move(905,100);
}

MenuPrincipal::~MenuPrincipal()
{
    delete ui;
}

void MenuPrincipal::Show(vector<Vuelo> *paso)
{
    vuelos = paso;
    cout << vuelos->size() << endl;
    this->show();
    reservaciones->Ligar(paso,ventanita);
    altav->Ligar(paso);
    buscador->Ligar(paso);
    reservaciones->show();
}

void MenuPrincipal::on_Reservacion_clicked()
{
    altav->hide();
    buscador->hide();
    ventanita->hide();
    reservaciones->Recargar();
    reservaciones->show();
}
void MenuPrincipal::on_AltaV_clicked()
{
    reservaciones->hide();
    buscador->hide();
    ventanita->hide();
    altav->show();
}

void MenuPrincipal::on_Busqueda_clicked()
{
    reservaciones->hide();
    altav->hide();
    ventanita->hide();
    buscador->Mostrar();
}

void MenuPrincipal::on_Salir_clicked()
{
    Archivo archi;
    archi.Guardar(vuelos);
    ventanita->close();
    this->close();
}
