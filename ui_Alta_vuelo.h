/********************************************************************************
** Form generated from reading UI file 'Alta_vuelo.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALTA_VUELO_H
#define UI_ALTA_VUELO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Alta_vuelo
{
public:
    QVBoxLayout *verticalLayout_9;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *LOrigen;
    QComboBox *Origen;
    QVBoxLayout *verticalLayout_4;
    QLabel *LDestino;
    QComboBox *Destino;
    QVBoxLayout *verticalLayout_3;
    QLabel *LDistancia;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *Distancia;
    QLabel *label;
    QHBoxLayout *horizontalLayout_6;
    QTableWidget *tableWidget;
    QVBoxLayout *verticalLayout_8;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *LSalida;
    QDateEdit *Salida;
    QVBoxLayout *verticalLayout_2;
    QLabel *LRegreso;
    QDateEdit *Regreso;
    QVBoxLayout *verticalLayout_6;
    QLabel *LPasajeros;
    QSpinBox *Pasajeros;
    QVBoxLayout *verticalLayout_7;
    QLabel *LCapacidad;
    QDoubleSpinBox *Capacidad;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *Alta;
    QPushButton *Limpiar;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *Alta_vuelo)
    {
        if (Alta_vuelo->objectName().isEmpty())
            Alta_vuelo->setObjectName(QStringLiteral("Alta_vuelo"));
        Alta_vuelo->setWindowModality(Qt::NonModal);
        Alta_vuelo->resize(630, 500);
        verticalLayout_9 = new QVBoxLayout(Alta_vuelo);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        LOrigen = new QLabel(Alta_vuelo);
        LOrigen->setObjectName(QStringLiteral("LOrigen"));

        verticalLayout_5->addWidget(LOrigen);

        Origen = new QComboBox(Alta_vuelo);
        Origen->setObjectName(QStringLiteral("Origen"));

        verticalLayout_5->addWidget(Origen);


        horizontalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        LDestino = new QLabel(Alta_vuelo);
        LDestino->setObjectName(QStringLiteral("LDestino"));

        verticalLayout_4->addWidget(LDestino);

        Destino = new QComboBox(Alta_vuelo);
        Destino->setObjectName(QStringLiteral("Destino"));

        verticalLayout_4->addWidget(Destino);


        horizontalLayout_3->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        LDistancia = new QLabel(Alta_vuelo);
        LDistancia->setObjectName(QStringLiteral("LDistancia"));

        verticalLayout_3->addWidget(LDistancia);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        Distancia = new QSpinBox(Alta_vuelo);
        Distancia->setObjectName(QStringLiteral("Distancia"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Distancia->sizePolicy().hasHeightForWidth());
        Distancia->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(Distancia);

        label = new QLabel(Alta_vuelo);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(label);


        verticalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_3);


        verticalLayout_9->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        tableWidget = new QTableWidget(Alta_vuelo);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy2);
        tableWidget->setMaximumSize(QSize(200, 80));
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->horizontalHeader()->setStretchLastSection(true);

        horizontalLayout_6->addWidget(tableWidget);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Ignored);

        verticalLayout_8->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        LSalida = new QLabel(Alta_vuelo);
        LSalida->setObjectName(QStringLiteral("LSalida"));

        verticalLayout->addWidget(LSalida);

        Salida = new QDateEdit(Alta_vuelo);
        Salida->setObjectName(QStringLiteral("Salida"));

        verticalLayout->addWidget(Salida);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        LRegreso = new QLabel(Alta_vuelo);
        LRegreso->setObjectName(QStringLiteral("LRegreso"));

        verticalLayout_2->addWidget(LRegreso);

        Regreso = new QDateEdit(Alta_vuelo);
        Regreso->setObjectName(QStringLiteral("Regreso"));

        verticalLayout_2->addWidget(Regreso);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        LPasajeros = new QLabel(Alta_vuelo);
        LPasajeros->setObjectName(QStringLiteral("LPasajeros"));

        verticalLayout_6->addWidget(LPasajeros);

        Pasajeros = new QSpinBox(Alta_vuelo);
        Pasajeros->setObjectName(QStringLiteral("Pasajeros"));

        verticalLayout_6->addWidget(Pasajeros);


        horizontalLayout->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        LCapacidad = new QLabel(Alta_vuelo);
        LCapacidad->setObjectName(QStringLiteral("LCapacidad"));

        verticalLayout_7->addWidget(LCapacidad);

        Capacidad = new QDoubleSpinBox(Alta_vuelo);
        Capacidad->setObjectName(QStringLiteral("Capacidad"));

        verticalLayout_7->addWidget(Capacidad);


        horizontalLayout->addLayout(verticalLayout_7);


        verticalLayout_8->addLayout(horizontalLayout);


        horizontalLayout_6->addLayout(verticalLayout_8);


        verticalLayout_9->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        Alta = new QPushButton(Alta_vuelo);
        Alta->setObjectName(QStringLiteral("Alta"));

        horizontalLayout_4->addWidget(Alta);

        Limpiar = new QPushButton(Alta_vuelo);
        Limpiar->setObjectName(QStringLiteral("Limpiar"));

        horizontalLayout_4->addWidget(Limpiar);


        horizontalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_9->addLayout(horizontalLayout_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_2);


        retranslateUi(Alta_vuelo);

        QMetaObject::connectSlotsByName(Alta_vuelo);
    } // setupUi

    void retranslateUi(QWidget *Alta_vuelo)
    {
        Alta_vuelo->setWindowTitle(QApplication::translate("Alta_vuelo", "Form", 0));
        LOrigen->setText(QApplication::translate("Alta_vuelo", "Origen", 0));
        Origen->clear();
        Origen->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("Alta_vuelo", "M\303\251xico - Guadalajara", 0)
         << QApplication::translate("Alta_vuelo", "M\303\251xico - D.F.", 0)
         << QApplication::translate("Alta_vuelo", "Canada - Montreal", 0)
         << QApplication::translate("Alta_vuelo", "USA - New York", 0)
         << QApplication::translate("Alta_vuelo", "USA - Kansas", 0)
         << QApplication::translate("Alta_vuelo", "Brasil - Brazilia", 0)
         << QApplication::translate("Alta_vuelo", "Inglaterra - Londres", 0)
        );
        LDestino->setText(QApplication::translate("Alta_vuelo", "Destino", 0));
        Destino->clear();
        Destino->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("Alta_vuelo", "M\303\251xico - Guadalajara", 0)
         << QApplication::translate("Alta_vuelo", "M\303\251xico - D.F.", 0)
         << QApplication::translate("Alta_vuelo", "Canada - Montreal", 0)
         << QApplication::translate("Alta_vuelo", "USA - New York", 0)
         << QApplication::translate("Alta_vuelo", "USA - Kansas", 0)
         << QApplication::translate("Alta_vuelo", "Brasil - Brazilia", 0)
         << QApplication::translate("Alta_vuelo", "Inglaterra - Londres", 0)
        );
        LDistancia->setText(QApplication::translate("Alta_vuelo", "Distancia", 0));
        label->setText(QApplication::translate("Alta_vuelo", "km", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Alta_vuelo", "Escalas", 0));
        LSalida->setText(QApplication::translate("Alta_vuelo", "Salida", 0));
        LRegreso->setText(QApplication::translate("Alta_vuelo", "Regreso", 0));
        LPasajeros->setText(QApplication::translate("Alta_vuelo", "Pasajeros", 0));
        LCapacidad->setText(QApplication::translate("Alta_vuelo", "Capacidad", 0));
        Alta->setText(QApplication::translate("Alta_vuelo", "Alta", 0));
        Limpiar->setText(QApplication::translate("Alta_vuelo", "Limpiar", 0));
    } // retranslateUi

};

namespace Ui {
    class Alta_vuelo: public Ui_Alta_vuelo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALTA_VUELO_H
