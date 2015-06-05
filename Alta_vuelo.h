#ifndef ALTA_VUELO_H
#define ALTA_VUELO_H
#include <QEvent>
#include <QWidget>
#include <vector>
#include "Vuelo.h"
#include "Grafo.h"

using namespace std;

namespace Ui {
class Alta_vuelo;
}

class Alta_vuelo : public QWidget
{
    Q_OBJECT

public:
    explicit Alta_vuelo(QWidget *parent = 0);
    ~Alta_vuelo();
    void Ligar(vector<Vuelo>* paso);
    bool eventFilter(QObject *o, QEvent *e);

private slots:
    void on_Alta_clicked();

    void on_Origen_currentIndexChanged(int index);

    void on_Destino_currentIndexChanged(int index);

    void on_Distancia_valueChanged(int arg1);

    void on_Limpiar_clicked();

private:
    Ui::Alta_vuelo *ui;
    vector<Vuelo>* vuelos;
    vector<string> nombres;
    Grafo grafo;
};

#endif // ALTA_VUELO_H
