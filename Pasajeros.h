#ifndef PASAJEROS_H
#define PASAJEROS_H
#include <vector>
#include <iostream>
#include <QWidget>
#include "Vuelo.h"

namespace Ui {
class Pasajeros;
}

class Pasajeros : public QWidget
{
    Q_OBJECT

public:
    explicit Pasajeros(QWidget *parent = 0);

    void Paso(vector<Vuelo>::iterator it, QWidget *ven);

    void Recargar(void);

    ~Pasajeros();

private slots:
    void on_Eliminar_clicked();

    void on_TablaPasajeros_cellClicked(int row, int column);

    void on_Ocultar_clicked();

private:

    Ui::Pasajeros *ui;
    vector<Vuelo>::iterator it;
};

#endif // PASAJEROS_H
