/********************************************************************************
** Form generated from reading UI file 'Buscar.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUSCAR_H
#define UI_BUSCAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Buscar
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_22;
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
    QTableWidget *TablaVuelos;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *EliminarVuelo;
    QFrame *line;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *Nombre;
    QTableWidget *TablaPasajeros;

    void setupUi(QWidget *Buscar)
    {
        if (Buscar->objectName().isEmpty())
            Buscar->setObjectName(QStringLiteral("Buscar"));
        Buscar->resize(630, 500);
        verticalLayout_2 = new QVBoxLayout(Buscar);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setObjectName(QStringLiteral("verticalLayout_22"));
        Vuelo = new QHBoxLayout();
        Vuelo->setObjectName(QStringLiteral("Vuelo"));
        CiudadO = new QVBoxLayout();
        CiudadO->setObjectName(QStringLiteral("CiudadO"));
        LCd_origen = new QLabel(Buscar);
        LCd_origen->setObjectName(QStringLiteral("LCd_origen"));

        CiudadO->addWidget(LCd_origen);

        Cd_origen = new QComboBox(Buscar);
        Cd_origen->setObjectName(QStringLiteral("Cd_origen"));

        CiudadO->addWidget(Cd_origen);


        Vuelo->addLayout(CiudadO);

        CiudadD = new QVBoxLayout();
        CiudadD->setObjectName(QStringLiteral("CiudadD"));
        label = new QLabel(Buscar);
        label->setObjectName(QStringLiteral("label"));

        CiudadD->addWidget(label);

        Cd_destino = new QComboBox(Buscar);
        Cd_destino->setObjectName(QStringLiteral("Cd_destino"));

        CiudadD->addWidget(Cd_destino);


        Vuelo->addLayout(CiudadD);

        Salidas = new QVBoxLayout();
        Salidas->setObjectName(QStringLiteral("Salidas"));
        LSalida = new QLabel(Buscar);
        LSalida->setObjectName(QStringLiteral("LSalida"));

        Salidas->addWidget(LSalida);

        Salida = new QDateEdit(Buscar);
        Salida->setObjectName(QStringLiteral("Salida"));

        Salidas->addWidget(Salida);


        Vuelo->addLayout(Salidas);

        egresos = new QVBoxLayout();
        egresos->setObjectName(QStringLiteral("egresos"));
        LRegreso = new QLabel(Buscar);
        LRegreso->setObjectName(QStringLiteral("LRegreso"));

        egresos->addWidget(LRegreso);

        Regreso = new QDateEdit(Buscar);
        Regreso->setObjectName(QStringLiteral("Regreso"));

        egresos->addWidget(Regreso);


        Vuelo->addLayout(egresos);


        verticalLayout_22->addLayout(Vuelo);

        TablaVuelos = new QTableWidget(Buscar);
        if (TablaVuelos->columnCount() < 5)
            TablaVuelos->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        TablaVuelos->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        TablaVuelos->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        TablaVuelos->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        TablaVuelos->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        TablaVuelos->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        TablaVuelos->setObjectName(QStringLiteral("TablaVuelos"));
        TablaVuelos->horizontalHeader()->setCascadingSectionResizes(false);
        TablaVuelos->horizontalHeader()->setDefaultSectionSize(120);
        TablaVuelos->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        TablaVuelos->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_22->addWidget(TablaVuelos);


        verticalLayout_2->addLayout(verticalLayout_22);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        EliminarVuelo = new QPushButton(Buscar);
        EliminarVuelo->setObjectName(QStringLiteral("EliminarVuelo"));

        horizontalLayout->addWidget(EliminarVuelo);


        verticalLayout_2->addLayout(horizontalLayout);

        line = new QFrame(Buscar);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(Buscar);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        Nombre = new QLineEdit(Buscar);
        Nombre->setObjectName(QStringLiteral("Nombre"));

        verticalLayout->addWidget(Nombre);

        TablaPasajeros = new QTableWidget(Buscar);
        if (TablaPasajeros->columnCount() < 2)
            TablaPasajeros->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        TablaPasajeros->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        TablaPasajeros->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        TablaPasajeros->setObjectName(QStringLiteral("TablaPasajeros"));
        TablaPasajeros->horizontalHeader()->setDefaultSectionSize(150);
        TablaPasajeros->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(TablaPasajeros);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Buscar);

        QMetaObject::connectSlotsByName(Buscar);
    } // setupUi

    void retranslateUi(QWidget *Buscar)
    {
        Buscar->setWindowTitle(QApplication::translate("Buscar", "Form", 0));
        LCd_origen->setText(QApplication::translate("Buscar", "Ciudad de Origen", 0));
        Cd_origen->clear();
        Cd_origen->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("Buscar", "M\303\251xico - D.F.", 0)
         << QApplication::translate("Buscar", "M\303\251xico - Guadalajara", 0)
         << QApplication::translate("Buscar", "Canada - Montreal", 0)
         << QApplication::translate("Buscar", "USA - New York", 0)
         << QApplication::translate("Buscar", "USA - Washington", 0)
        );
        label->setText(QApplication::translate("Buscar", "Ciudad de Destino", 0));
        Cd_destino->clear();
        Cd_destino->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("Buscar", "M\303\251xico - D.F.", 0)
         << QApplication::translate("Buscar", "M\303\251xico - Guadalajara", 0)
         << QApplication::translate("Buscar", "Canada - Montreal", 0)
         << QApplication::translate("Buscar", "USA - New York", 0)
         << QApplication::translate("Buscar", "USA - Washington", 0)
        );
        LSalida->setText(QApplication::translate("Buscar", "Salida", 0));
        LRegreso->setText(QApplication::translate("Buscar", "Regreso", 0));
        QTableWidgetItem *___qtablewidgetitem = TablaVuelos->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Buscar", "Origen", 0));
        QTableWidgetItem *___qtablewidgetitem1 = TablaVuelos->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Buscar", "Destino", 0));
        QTableWidgetItem *___qtablewidgetitem2 = TablaVuelos->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Buscar", "Salida", 0));
        QTableWidgetItem *___qtablewidgetitem3 = TablaVuelos->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Buscar", "Regreso", 0));
        QTableWidgetItem *___qtablewidgetitem4 = TablaVuelos->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Buscar", "Asientos", 0));
        EliminarVuelo->setText(QApplication::translate("Buscar", "Eliminar", 0));
        label_2->setText(QApplication::translate("Buscar", "Nombre", 0));
        QTableWidgetItem *___qtablewidgetitem5 = TablaPasajeros->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("Buscar", "Nombre", 0));
        QTableWidgetItem *___qtablewidgetitem6 = TablaPasajeros->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("Buscar", "Vuelo", 0));
    } // retranslateUi

};

namespace Ui {
    class Buscar: public Ui_Buscar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSCAR_H
