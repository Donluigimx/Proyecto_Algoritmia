/********************************************************************************
** Form generated from reading UI file 'Reservar.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESERVAR_H
#define UI_RESERVAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Reservar
{
public:
    QVBoxLayout *verticalLayout_22;
    QHBoxLayout *Personal;
    QVBoxLayout *Nombres;
    QLabel *LNombre;
    QLineEdit *Nombre;
    QVBoxLayout *Apellidos;
    QLabel *LApellido;
    QLineEdit *Apellido;
    QVBoxLayout *Edades;
    QLabel *LEdad;
    QSpinBox *Edad;
    QHBoxLayout *Vuelo;
    QVBoxLayout *CiudadO;
    QLabel *LCd_origen;
    QComboBox *Cd_origen;
    QVBoxLayout *CiudadD;
    QLabel *label;
    QComboBox *Cd_destino;
    QVBoxLayout *Salidas;
    QLabel *LSalida;
    QDateEdit *Salida;
    QVBoxLayout *egresos;
    QLabel *LRegreso;
    QDateEdit *Regreso;
    QHBoxLayout *horizontalLayout_12;
    QTableWidget *Vuelos;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_2;
    QPushButton *PAsientos;
    QPushButton *PSalida;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *Asientos_2;
    QHBoxLayout *S1_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *A1;
    QPushButton *A2;
    QPushButton *A3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *B1;
    QPushButton *B2;
    QPushButton *B3;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_6;
    QPushButton *C1;
    QPushButton *C2;
    QPushButton *C3;
    QVBoxLayout *verticalLayout_7;
    QPushButton *D1;
    QPushButton *D2;
    QPushButton *D3;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_10;
    QPushButton *E1;
    QPushButton *E2;
    QPushButton *E3;
    QVBoxLayout *verticalLayout_12;
    QPushButton *F1;
    QPushButton *F2;
    QPushButton *F3;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_14;
    QPushButton *G1;
    QPushButton *G2;
    QPushButton *G3;
    QVBoxLayout *verticalLayout_15;
    QPushButton *H1;
    QPushButton *H2;
    QPushButton *H3;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_21;
    QPushButton *I1;
    QPushButton *I2;
    QPushButton *I3;
    QVBoxLayout *verticalLayout_20;
    QPushButton *J1;
    QPushButton *J2;
    QPushButton *J3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *S4_6;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QPushButton *A4;
    QPushButton *A5;
    QPushButton *A6;
    QVBoxLayout *verticalLayout_4;
    QPushButton *B4;
    QPushButton *B5;
    QPushButton *B6;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_8;
    QPushButton *C4;
    QPushButton *C5;
    QPushButton *C6;
    QVBoxLayout *verticalLayout_9;
    QPushButton *D4;
    QPushButton *D5;
    QPushButton *D6;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_11;
    QPushButton *E4;
    QPushButton *E5;
    QPushButton *E6;
    QVBoxLayout *verticalLayout_13;
    QPushButton *F4;
    QPushButton *F5;
    QPushButton *F6;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_17;
    QPushButton *G4;
    QPushButton *G5;
    QPushButton *G6;
    QVBoxLayout *verticalLayout_16;
    QPushButton *H4;
    QPushButton *H5;
    QPushButton *H6;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_18;
    QPushButton *I4;
    QPushButton *I5;
    QPushButton *I6;
    QVBoxLayout *verticalLayout_19;
    QPushButton *J4;
    QPushButton *J5;
    QPushButton *J6;
    QVBoxLayout *verticalLayout_23;
    QSpacerItem *verticalSpacer_2;
    QPushButton *BLimpiar;
    QPushButton *BReservar;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *Reservar)
    {
        if (Reservar->objectName().isEmpty())
            Reservar->setObjectName(QStringLiteral("Reservar"));
        Reservar->resize(630, 500);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Reservar->sizePolicy().hasHeightForWidth());
        Reservar->setSizePolicy(sizePolicy);
        verticalLayout_22 = new QVBoxLayout(Reservar);
        verticalLayout_22->setObjectName(QStringLiteral("verticalLayout_22"));
        Personal = new QHBoxLayout();
        Personal->setObjectName(QStringLiteral("Personal"));
        Nombres = new QVBoxLayout();
        Nombres->setObjectName(QStringLiteral("Nombres"));
        LNombre = new QLabel(Reservar);
        LNombre->setObjectName(QStringLiteral("LNombre"));

        Nombres->addWidget(LNombre);

        Nombre = new QLineEdit(Reservar);
        Nombre->setObjectName(QStringLiteral("Nombre"));

        Nombres->addWidget(Nombre);


        Personal->addLayout(Nombres);

        Apellidos = new QVBoxLayout();
        Apellidos->setObjectName(QStringLiteral("Apellidos"));
        LApellido = new QLabel(Reservar);
        LApellido->setObjectName(QStringLiteral("LApellido"));

        Apellidos->addWidget(LApellido);

        Apellido = new QLineEdit(Reservar);
        Apellido->setObjectName(QStringLiteral("Apellido"));

        Apellidos->addWidget(Apellido);


        Personal->addLayout(Apellidos);

        Edades = new QVBoxLayout();
        Edades->setObjectName(QStringLiteral("Edades"));
        LEdad = new QLabel(Reservar);
        LEdad->setObjectName(QStringLiteral("LEdad"));

        Edades->addWidget(LEdad);

        Edad = new QSpinBox(Reservar);
        Edad->setObjectName(QStringLiteral("Edad"));

        Edades->addWidget(Edad);


        Personal->addLayout(Edades);


        verticalLayout_22->addLayout(Personal);

        Vuelo = new QHBoxLayout();
        Vuelo->setObjectName(QStringLiteral("Vuelo"));
        CiudadO = new QVBoxLayout();
        CiudadO->setObjectName(QStringLiteral("CiudadO"));
        LCd_origen = new QLabel(Reservar);
        LCd_origen->setObjectName(QStringLiteral("LCd_origen"));

        CiudadO->addWidget(LCd_origen);

        Cd_origen = new QComboBox(Reservar);
        Cd_origen->setObjectName(QStringLiteral("Cd_origen"));

        CiudadO->addWidget(Cd_origen);


        Vuelo->addLayout(CiudadO);

        CiudadD = new QVBoxLayout();
        CiudadD->setObjectName(QStringLiteral("CiudadD"));
        label = new QLabel(Reservar);
        label->setObjectName(QStringLiteral("label"));

        CiudadD->addWidget(label);

        Cd_destino = new QComboBox(Reservar);
        Cd_destino->setObjectName(QStringLiteral("Cd_destino"));

        CiudadD->addWidget(Cd_destino);


        Vuelo->addLayout(CiudadD);

        Salidas = new QVBoxLayout();
        Salidas->setObjectName(QStringLiteral("Salidas"));
        LSalida = new QLabel(Reservar);
        LSalida->setObjectName(QStringLiteral("LSalida"));

        Salidas->addWidget(LSalida);

        Salida = new QDateEdit(Reservar);
        Salida->setObjectName(QStringLiteral("Salida"));

        Salidas->addWidget(Salida);


        Vuelo->addLayout(Salidas);

        egresos = new QVBoxLayout();
        egresos->setObjectName(QStringLiteral("egresos"));
        LRegreso = new QLabel(Reservar);
        LRegreso->setObjectName(QStringLiteral("LRegreso"));

        egresos->addWidget(LRegreso);

        Regreso = new QDateEdit(Reservar);
        Regreso->setObjectName(QStringLiteral("Regreso"));

        egresos->addWidget(Regreso);


        Vuelo->addLayout(egresos);


        verticalLayout_22->addLayout(Vuelo);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        Vuelos = new QTableWidget(Reservar);
        if (Vuelos->columnCount() < 5)
            Vuelos->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        Vuelos->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        Vuelos->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        Vuelos->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        Vuelos->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        Vuelos->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        Vuelos->setObjectName(QStringLiteral("Vuelos"));
        Vuelos->setShowGrid(true);
        Vuelos->setSortingEnabled(false);
        Vuelos->horizontalHeader()->setCascadingSectionResizes(false);
        Vuelos->horizontalHeader()->setDefaultSectionSize(110);
        Vuelos->horizontalHeader()->setHighlightSections(false);
        Vuelos->horizontalHeader()->setMinimumSectionSize(10);
        Vuelos->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        Vuelos->horizontalHeader()->setStretchLastSection(true);
        Vuelos->verticalHeader()->setVisible(true);

        horizontalLayout_12->addWidget(Vuelos);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        label_2 = new QLabel(Reservar);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(label_2);

        PAsientos = new QPushButton(Reservar);
        PAsientos->setObjectName(QStringLiteral("PAsientos"));

        verticalLayout->addWidget(PAsientos);

        PSalida = new QPushButton(Reservar);
        PSalida->setObjectName(QStringLiteral("PSalida"));

        verticalLayout->addWidget(PSalida);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);


        horizontalLayout_12->addLayout(verticalLayout);


        verticalLayout_22->addLayout(horizontalLayout_12);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        Asientos_2 = new QVBoxLayout();
        Asientos_2->setObjectName(QStringLiteral("Asientos_2"));
        S1_3 = new QHBoxLayout();
        S1_3->setObjectName(QStringLiteral("S1_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        A1 = new QPushButton(Reservar);
        A1->setObjectName(QStringLiteral("A1"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(A1->sizePolicy().hasHeightForWidth());
        A1->setSizePolicy(sizePolicy2);
        A1->setCheckable(true);
        A1->setAutoDefault(false);
        A1->setDefault(false);
        A1->setFlat(false);

        verticalLayout_2->addWidget(A1);

        A2 = new QPushButton(Reservar);
        A2->setObjectName(QStringLiteral("A2"));
        A2->setCheckable(true);

        verticalLayout_2->addWidget(A2);

        A3 = new QPushButton(Reservar);
        A3->setObjectName(QStringLiteral("A3"));
        A3->setCheckable(true);

        verticalLayout_2->addWidget(A3);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        B1 = new QPushButton(Reservar);
        B1->setObjectName(QStringLiteral("B1"));
        B1->setCheckable(true);

        verticalLayout_3->addWidget(B1);

        B2 = new QPushButton(Reservar);
        B2->setObjectName(QStringLiteral("B2"));
        B2->setCheckable(true);

        verticalLayout_3->addWidget(B2);

        B3 = new QPushButton(Reservar);
        B3->setObjectName(QStringLiteral("B3"));
        B3->setCheckable(true);

        verticalLayout_3->addWidget(B3);


        horizontalLayout->addLayout(verticalLayout_3);


        S1_3->addLayout(horizontalLayout);

        horizontalSpacer_2 = new QSpacerItem(20, 29, QSizePolicy::Fixed, QSizePolicy::Minimum);

        S1_3->addItem(horizontalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        C1 = new QPushButton(Reservar);
        C1->setObjectName(QStringLiteral("C1"));
        C1->setCheckable(true);

        verticalLayout_6->addWidget(C1);

        C2 = new QPushButton(Reservar);
        C2->setObjectName(QStringLiteral("C2"));
        C2->setCheckable(true);

        verticalLayout_6->addWidget(C2);

        C3 = new QPushButton(Reservar);
        C3->setObjectName(QStringLiteral("C3"));
        C3->setCheckable(true);

        verticalLayout_6->addWidget(C3);


        horizontalLayout_3->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        D1 = new QPushButton(Reservar);
        D1->setObjectName(QStringLiteral("D1"));
        D1->setCheckable(true);

        verticalLayout_7->addWidget(D1);

        D2 = new QPushButton(Reservar);
        D2->setObjectName(QStringLiteral("D2"));
        D2->setCheckable(true);

        verticalLayout_7->addWidget(D2);

        D3 = new QPushButton(Reservar);
        D3->setObjectName(QStringLiteral("D3"));
        D3->setCheckable(true);

        verticalLayout_7->addWidget(D3);


        horizontalLayout_3->addLayout(verticalLayout_7);


        S1_3->addLayout(horizontalLayout_3);

        horizontalSpacer_4 = new QSpacerItem(20, 29, QSizePolicy::Fixed, QSizePolicy::Minimum);

        S1_3->addItem(horizontalSpacer_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        E1 = new QPushButton(Reservar);
        E1->setObjectName(QStringLiteral("E1"));
        E1->setCheckable(true);

        verticalLayout_10->addWidget(E1);

        E2 = new QPushButton(Reservar);
        E2->setObjectName(QStringLiteral("E2"));
        E2->setCheckable(true);

        verticalLayout_10->addWidget(E2);

        E3 = new QPushButton(Reservar);
        E3->setObjectName(QStringLiteral("E3"));
        E3->setCheckable(true);

        verticalLayout_10->addWidget(E3);


        horizontalLayout_5->addLayout(verticalLayout_10);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        F1 = new QPushButton(Reservar);
        F1->setObjectName(QStringLiteral("F1"));
        F1->setCheckable(true);

        verticalLayout_12->addWidget(F1);

        F2 = new QPushButton(Reservar);
        F2->setObjectName(QStringLiteral("F2"));
        F2->setCheckable(true);

        verticalLayout_12->addWidget(F2);

        F3 = new QPushButton(Reservar);
        F3->setObjectName(QStringLiteral("F3"));
        F3->setCheckable(true);

        verticalLayout_12->addWidget(F3);


        horizontalLayout_5->addLayout(verticalLayout_12);


        S1_3->addLayout(horizontalLayout_5);

        horizontalSpacer_9 = new QSpacerItem(20, 29, QSizePolicy::Fixed, QSizePolicy::Minimum);

        S1_3->addItem(horizontalSpacer_9);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        G1 = new QPushButton(Reservar);
        G1->setObjectName(QStringLiteral("G1"));
        G1->setCheckable(true);

        verticalLayout_14->addWidget(G1);

        G2 = new QPushButton(Reservar);
        G2->setObjectName(QStringLiteral("G2"));
        G2->setCheckable(true);

        verticalLayout_14->addWidget(G2);

        G3 = new QPushButton(Reservar);
        G3->setObjectName(QStringLiteral("G3"));
        G3->setCheckable(true);

        verticalLayout_14->addWidget(G3);


        horizontalLayout_7->addLayout(verticalLayout_14);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        H1 = new QPushButton(Reservar);
        H1->setObjectName(QStringLiteral("H1"));
        H1->setCheckable(true);

        verticalLayout_15->addWidget(H1);

        H2 = new QPushButton(Reservar);
        H2->setObjectName(QStringLiteral("H2"));
        H2->setCheckable(true);

        verticalLayout_15->addWidget(H2);

        H3 = new QPushButton(Reservar);
        H3->setObjectName(QStringLiteral("H3"));
        H3->setCheckable(true);

        verticalLayout_15->addWidget(H3);


        horizontalLayout_7->addLayout(verticalLayout_15);


        S1_3->addLayout(horizontalLayout_7);

        horizontalSpacer_8 = new QSpacerItem(20, 29, QSizePolicy::Fixed, QSizePolicy::Minimum);

        S1_3->addItem(horizontalSpacer_8);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        I1 = new QPushButton(Reservar);
        I1->setObjectName(QStringLiteral("I1"));
        I1->setCheckable(true);

        verticalLayout_21->addWidget(I1);

        I2 = new QPushButton(Reservar);
        I2->setObjectName(QStringLiteral("I2"));
        I2->setCheckable(true);

        verticalLayout_21->addWidget(I2);

        I3 = new QPushButton(Reservar);
        I3->setObjectName(QStringLiteral("I3"));
        I3->setCheckable(true);

        verticalLayout_21->addWidget(I3);


        horizontalLayout_10->addLayout(verticalLayout_21);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        J1 = new QPushButton(Reservar);
        J1->setObjectName(QStringLiteral("J1"));
        J1->setCheckable(true);

        verticalLayout_20->addWidget(J1);

        J2 = new QPushButton(Reservar);
        J2->setObjectName(QStringLiteral("J2"));
        J2->setCheckable(true);

        verticalLayout_20->addWidget(J2);

        J3 = new QPushButton(Reservar);
        J3->setObjectName(QStringLiteral("J3"));
        J3->setCheckable(true);

        verticalLayout_20->addWidget(J3);


        horizontalLayout_10->addLayout(verticalLayout_20);


        S1_3->addLayout(horizontalLayout_10);


        Asientos_2->addLayout(S1_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        Asientos_2->addItem(verticalSpacer);

        S4_6 = new QHBoxLayout();
        S4_6->setObjectName(QStringLiteral("S4_6"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        A4 = new QPushButton(Reservar);
        A4->setObjectName(QStringLiteral("A4"));
        A4->setCheckable(true);

        verticalLayout_5->addWidget(A4);

        A5 = new QPushButton(Reservar);
        A5->setObjectName(QStringLiteral("A5"));
        A5->setCheckable(true);

        verticalLayout_5->addWidget(A5);

        A6 = new QPushButton(Reservar);
        A6->setObjectName(QStringLiteral("A6"));
        A6->setCheckable(true);

        verticalLayout_5->addWidget(A6);


        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        B4 = new QPushButton(Reservar);
        B4->setObjectName(QStringLiteral("B4"));
        B4->setCheckable(true);

        verticalLayout_4->addWidget(B4);

        B5 = new QPushButton(Reservar);
        B5->setObjectName(QStringLiteral("B5"));
        B5->setCheckable(true);

        verticalLayout_4->addWidget(B5);

        B6 = new QPushButton(Reservar);
        B6->setObjectName(QStringLiteral("B6"));
        B6->setCheckable(true);

        verticalLayout_4->addWidget(B6);


        horizontalLayout_2->addLayout(verticalLayout_4);


        S4_6->addLayout(horizontalLayout_2);

        horizontalSpacer_3 = new QSpacerItem(20, 29, QSizePolicy::Fixed, QSizePolicy::Minimum);

        S4_6->addItem(horizontalSpacer_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        C4 = new QPushButton(Reservar);
        C4->setObjectName(QStringLiteral("C4"));
        C4->setCheckable(true);

        verticalLayout_8->addWidget(C4);

        C5 = new QPushButton(Reservar);
        C5->setObjectName(QStringLiteral("C5"));
        C5->setCheckable(true);

        verticalLayout_8->addWidget(C5);

        C6 = new QPushButton(Reservar);
        C6->setObjectName(QStringLiteral("C6"));
        C6->setCheckable(true);

        verticalLayout_8->addWidget(C6);


        horizontalLayout_4->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        D4 = new QPushButton(Reservar);
        D4->setObjectName(QStringLiteral("D4"));
        D4->setCheckable(true);

        verticalLayout_9->addWidget(D4);

        D5 = new QPushButton(Reservar);
        D5->setObjectName(QStringLiteral("D5"));
        D5->setCheckable(true);

        verticalLayout_9->addWidget(D5);

        D6 = new QPushButton(Reservar);
        D6->setObjectName(QStringLiteral("D6"));
        D6->setCheckable(true);

        verticalLayout_9->addWidget(D6);


        horizontalLayout_4->addLayout(verticalLayout_9);


        S4_6->addLayout(horizontalLayout_4);

        horizontalSpacer_5 = new QSpacerItem(20, 29, QSizePolicy::Fixed, QSizePolicy::Minimum);

        S4_6->addItem(horizontalSpacer_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        E4 = new QPushButton(Reservar);
        E4->setObjectName(QStringLiteral("E4"));
        E4->setCheckable(true);

        verticalLayout_11->addWidget(E4);

        E5 = new QPushButton(Reservar);
        E5->setObjectName(QStringLiteral("E5"));
        E5->setCheckable(true);

        verticalLayout_11->addWidget(E5);

        E6 = new QPushButton(Reservar);
        E6->setObjectName(QStringLiteral("E6"));
        E6->setCheckable(true);

        verticalLayout_11->addWidget(E6);


        horizontalLayout_6->addLayout(verticalLayout_11);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        F4 = new QPushButton(Reservar);
        F4->setObjectName(QStringLiteral("F4"));
        F4->setCheckable(true);

        verticalLayout_13->addWidget(F4);

        F5 = new QPushButton(Reservar);
        F5->setObjectName(QStringLiteral("F5"));
        F5->setCheckable(true);

        verticalLayout_13->addWidget(F5);

        F6 = new QPushButton(Reservar);
        F6->setObjectName(QStringLiteral("F6"));
        F6->setCheckable(true);

        verticalLayout_13->addWidget(F6);


        horizontalLayout_6->addLayout(verticalLayout_13);


        S4_6->addLayout(horizontalLayout_6);

        horizontalSpacer_6 = new QSpacerItem(20, 29, QSizePolicy::Fixed, QSizePolicy::Minimum);

        S4_6->addItem(horizontalSpacer_6);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        G4 = new QPushButton(Reservar);
        G4->setObjectName(QStringLiteral("G4"));
        G4->setCheckable(true);

        verticalLayout_17->addWidget(G4);

        G5 = new QPushButton(Reservar);
        G5->setObjectName(QStringLiteral("G5"));
        G5->setCheckable(true);

        verticalLayout_17->addWidget(G5);

        G6 = new QPushButton(Reservar);
        G6->setObjectName(QStringLiteral("G6"));
        G6->setCheckable(true);

        verticalLayout_17->addWidget(G6);


        horizontalLayout_8->addLayout(verticalLayout_17);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        H4 = new QPushButton(Reservar);
        H4->setObjectName(QStringLiteral("H4"));
        H4->setCheckable(true);

        verticalLayout_16->addWidget(H4);

        H5 = new QPushButton(Reservar);
        H5->setObjectName(QStringLiteral("H5"));
        H5->setCheckable(true);

        verticalLayout_16->addWidget(H5);

        H6 = new QPushButton(Reservar);
        H6->setObjectName(QStringLiteral("H6"));
        H6->setCheckable(true);

        verticalLayout_16->addWidget(H6);


        horizontalLayout_8->addLayout(verticalLayout_16);


        S4_6->addLayout(horizontalLayout_8);

        horizontalSpacer_7 = new QSpacerItem(20, 29, QSizePolicy::Fixed, QSizePolicy::Minimum);

        S4_6->addItem(horizontalSpacer_7);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        I4 = new QPushButton(Reservar);
        I4->setObjectName(QStringLiteral("I4"));
        I4->setCheckable(true);

        verticalLayout_18->addWidget(I4);

        I5 = new QPushButton(Reservar);
        I5->setObjectName(QStringLiteral("I5"));
        I5->setCheckable(true);

        verticalLayout_18->addWidget(I5);

        I6 = new QPushButton(Reservar);
        I6->setObjectName(QStringLiteral("I6"));
        I6->setCheckable(true);

        verticalLayout_18->addWidget(I6);


        horizontalLayout_9->addLayout(verticalLayout_18);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        J4 = new QPushButton(Reservar);
        J4->setObjectName(QStringLiteral("J4"));
        J4->setCheckable(true);

        verticalLayout_19->addWidget(J4);

        J5 = new QPushButton(Reservar);
        J5->setObjectName(QStringLiteral("J5"));
        J5->setCheckable(true);

        verticalLayout_19->addWidget(J5);

        J6 = new QPushButton(Reservar);
        J6->setObjectName(QStringLiteral("J6"));
        J6->setCheckable(true);

        verticalLayout_19->addWidget(J6);


        horizontalLayout_9->addLayout(verticalLayout_19);


        S4_6->addLayout(horizontalLayout_9);


        Asientos_2->addLayout(S4_6);


        horizontalLayout_11->addLayout(Asientos_2);

        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setObjectName(QStringLiteral("verticalLayout_23"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_23->addItem(verticalSpacer_2);

        BLimpiar = new QPushButton(Reservar);
        BLimpiar->setObjectName(QStringLiteral("BLimpiar"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(BLimpiar->sizePolicy().hasHeightForWidth());
        BLimpiar->setSizePolicy(sizePolicy3);

        verticalLayout_23->addWidget(BLimpiar);

        BReservar = new QPushButton(Reservar);
        BReservar->setObjectName(QStringLiteral("BReservar"));

        verticalLayout_23->addWidget(BReservar);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_23->addItem(verticalSpacer_3);


        horizontalLayout_11->addLayout(verticalLayout_23);


        verticalLayout_22->addLayout(horizontalLayout_11);


        retranslateUi(Reservar);

        QMetaObject::connectSlotsByName(Reservar);
    } // setupUi

    void retranslateUi(QWidget *Reservar)
    {
        Reservar->setWindowTitle(QApplication::translate("Reservar", "Form", 0));
        LNombre->setText(QApplication::translate("Reservar", "Nombre                                       ", 0));
        LApellido->setText(QApplication::translate("Reservar", "Apellido", 0));
        LEdad->setText(QApplication::translate("Reservar", "Edad", 0));
        LCd_origen->setText(QApplication::translate("Reservar", "Ciudad de Origen", 0));
        Cd_origen->clear();
        Cd_origen->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("Reservar", "M\303\251xico - Guadalajara", 0)
         << QApplication::translate("Reservar", "M\303\251xico - D.F.", 0)
         << QApplication::translate("Reservar", "Canada - Montreal", 0)
         << QApplication::translate("Reservar", "USA - New York", 0)
         << QApplication::translate("Reservar", "USA - Kansas", 0)
         << QApplication::translate("Reservar", "Brasil - Brazilia", 0)
         << QApplication::translate("Reservar", "Inglaterra - Londres", 0)
        );
        label->setText(QApplication::translate("Reservar", "Ciudad de Destino", 0));
        Cd_destino->clear();
        Cd_destino->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("Reservar", "M\303\251xico - Guadalajara", 0)
         << QApplication::translate("Reservar", "M\303\251xico - D.F.", 0)
         << QApplication::translate("Reservar", "Canada - Montreal", 0)
         << QApplication::translate("Reservar", "USA - New York", 0)
         << QApplication::translate("Reservar", "USA - Kansas", 0)
         << QApplication::translate("Reservar", "Brasil - Brazilia", 0)
         << QApplication::translate("Reservar", "Inglaterra - Londres", 0)
        );
        LSalida->setText(QApplication::translate("Reservar", "Salida", 0));
        LRegreso->setText(QApplication::translate("Reservar", "Regreso", 0));
        QTableWidgetItem *___qtablewidgetitem = Vuelos->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Reservar", "Origen", 0));
        QTableWidgetItem *___qtablewidgetitem1 = Vuelos->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Reservar", "Destino", 0));
        QTableWidgetItem *___qtablewidgetitem2 = Vuelos->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Reservar", "Salida", 0));
        QTableWidgetItem *___qtablewidgetitem3 = Vuelos->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Reservar", "Regreso", 0));
        QTableWidgetItem *___qtablewidgetitem4 = Vuelos->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Reservar", "Asientos", 0));
        label_2->setText(QApplication::translate("Reservar", "Ordenar Por:", 0));
        PAsientos->setText(QApplication::translate("Reservar", "Asientos", 0));
        PSalida->setText(QApplication::translate("Reservar", "Salida", 0));
        A1->setText(QApplication::translate("Reservar", "A1", 0));
        A2->setText(QApplication::translate("Reservar", "A2", 0));
        A3->setText(QApplication::translate("Reservar", "A3", 0));
        B1->setText(QApplication::translate("Reservar", "B1", 0));
        B2->setText(QApplication::translate("Reservar", "B2", 0));
        B3->setText(QApplication::translate("Reservar", "B3", 0));
        C1->setText(QApplication::translate("Reservar", "C1", 0));
        C2->setText(QApplication::translate("Reservar", "C2", 0));
        C3->setText(QApplication::translate("Reservar", "C3", 0));
        D1->setText(QApplication::translate("Reservar", "D1", 0));
        D2->setText(QApplication::translate("Reservar", "D2", 0));
        D3->setText(QApplication::translate("Reservar", "D3", 0));
        E1->setText(QApplication::translate("Reservar", "E1", 0));
        E2->setText(QApplication::translate("Reservar", "E2", 0));
        E3->setText(QApplication::translate("Reservar", "E3", 0));
        F1->setText(QApplication::translate("Reservar", "F1", 0));
        F2->setText(QApplication::translate("Reservar", "F2", 0));
        F3->setText(QApplication::translate("Reservar", "F3", 0));
        G1->setText(QApplication::translate("Reservar", "G1", 0));
        G2->setText(QApplication::translate("Reservar", "G2", 0));
        G3->setText(QApplication::translate("Reservar", "G3", 0));
        H1->setText(QApplication::translate("Reservar", "H1", 0));
        H2->setText(QApplication::translate("Reservar", "H2", 0));
        H3->setText(QApplication::translate("Reservar", "H3", 0));
        I1->setText(QApplication::translate("Reservar", "I1", 0));
        I2->setText(QApplication::translate("Reservar", "I2", 0));
        I3->setText(QApplication::translate("Reservar", "I3", 0));
        J1->setText(QApplication::translate("Reservar", "J1", 0));
        J2->setText(QApplication::translate("Reservar", "J2", 0));
        J3->setText(QApplication::translate("Reservar", "J3", 0));
        A4->setText(QApplication::translate("Reservar", "A4", 0));
        A5->setText(QApplication::translate("Reservar", "A5", 0));
        A6->setText(QApplication::translate("Reservar", "A6", 0));
        B4->setText(QApplication::translate("Reservar", "B4", 0));
        B5->setText(QApplication::translate("Reservar", "B5", 0));
        B6->setText(QApplication::translate("Reservar", "B6", 0));
        C4->setText(QApplication::translate("Reservar", "C4", 0));
        C5->setText(QApplication::translate("Reservar", "C5", 0));
        C6->setText(QApplication::translate("Reservar", "C6", 0));
        D4->setText(QApplication::translate("Reservar", "D4", 0));
        D5->setText(QApplication::translate("Reservar", "D5", 0));
        D6->setText(QApplication::translate("Reservar", "D6", 0));
        E4->setText(QApplication::translate("Reservar", "E4", 0));
        E5->setText(QApplication::translate("Reservar", "E5", 0));
        E6->setText(QApplication::translate("Reservar", "E6", 0));
        F4->setText(QApplication::translate("Reservar", "F4", 0));
        F5->setText(QApplication::translate("Reservar", "F5", 0));
        F6->setText(QApplication::translate("Reservar", "F6", 0));
        G4->setText(QApplication::translate("Reservar", "G4", 0));
        G5->setText(QApplication::translate("Reservar", "G5", 0));
        G6->setText(QApplication::translate("Reservar", "G6", 0));
        H4->setText(QApplication::translate("Reservar", "H4", 0));
        H5->setText(QApplication::translate("Reservar", "H5", 0));
        H6->setText(QApplication::translate("Reservar", "H6", 0));
        I4->setText(QApplication::translate("Reservar", "I4", 0));
        I5->setText(QApplication::translate("Reservar", "I5", 0));
        I6->setText(QApplication::translate("Reservar", "I6", 0));
        J4->setText(QApplication::translate("Reservar", "J4", 0));
        J5->setText(QApplication::translate("Reservar", "J5", 0));
        J6->setText(QApplication::translate("Reservar", "J6", 0));
        BLimpiar->setText(QApplication::translate("Reservar", "Limpiar", 0));
        BReservar->setText(QApplication::translate("Reservar", "Reservar", 0));
    } // retranslateUi

};

namespace Ui {
    class Reservar: public Ui_Reservar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESERVAR_H
