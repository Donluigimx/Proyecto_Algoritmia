#ifndef MENUPRINCIPAL_H
#define MENUPRINCIPAL_H

#include <vector>
#include <QMainWindow>
#include "Vuelo.h"
#include "Buscar.h"
#include "Reservar.h"
#include "Alta_vuelo.h"
#include "Pasajeros.h"

namespace Ui {
class MenuPrincipal;
}

class MenuPrincipal : public QMainWindow
{
    Q_OBJECT

public:
    explicit MenuPrincipal(QWidget *parent = 0);
    ~MenuPrincipal();
    void Show(vector<Vuelo>* paso);

private slots:

    void on_Reservacion_clicked();

    void on_AltaV_clicked();

    void on_Busqueda_clicked();

    void on_Salir_clicked();

private:
    Ui::MenuPrincipal *ui;
    vector<Vuelo> *vuelos;
    Reservar* reservaciones;
    Alta_vuelo* altav;
    Buscar* buscador;
    Pasajeros* ventanita;
};

#endif // MENUPRINCIPAL_H
