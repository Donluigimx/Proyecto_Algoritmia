/********************************************************************************
** Form generated from reading UI file 'pasajeros.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASAJEROS_H
#define UI_PASAJEROS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pasajeros
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *TablaPasajeros;
    QHBoxLayout *horizontalLayout;
    QPushButton *Eliminar;
    QPushButton *Ocultar;

    void setupUi(QWidget *Pasajeros)
    {
        if (Pasajeros->objectName().isEmpty())
            Pasajeros->setObjectName(QStringLiteral("Pasajeros"));
        Pasajeros->resize(300, 510);
        verticalLayout = new QVBoxLayout(Pasajeros);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        TablaPasajeros = new QTableWidget(Pasajeros);
        if (TablaPasajeros->columnCount() < 3)
            TablaPasajeros->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        TablaPasajeros->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        TablaPasajeros->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        TablaPasajeros->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        TablaPasajeros->setObjectName(QStringLiteral("TablaPasajeros"));
        TablaPasajeros->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(TablaPasajeros);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Eliminar = new QPushButton(Pasajeros);
        Eliminar->setObjectName(QStringLiteral("Eliminar"));

        horizontalLayout->addWidget(Eliminar);

        Ocultar = new QPushButton(Pasajeros);
        Ocultar->setObjectName(QStringLiteral("Ocultar"));

        horizontalLayout->addWidget(Ocultar);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Pasajeros);

        QMetaObject::connectSlotsByName(Pasajeros);
    } // setupUi

    void retranslateUi(QWidget *Pasajeros)
    {
        Pasajeros->setWindowTitle(QApplication::translate("Pasajeros", "Form", 0));
        QTableWidgetItem *___qtablewidgetitem = TablaPasajeros->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Pasajeros", "Nombre", 0));
        QTableWidgetItem *___qtablewidgetitem1 = TablaPasajeros->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Pasajeros", "Apellido", 0));
        QTableWidgetItem *___qtablewidgetitem2 = TablaPasajeros->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Pasajeros", "Asiento", 0));
        Eliminar->setText(QApplication::translate("Pasajeros", "Eliminar Reservaci\303\263n", 0));
        Ocultar->setText(QApplication::translate("Pasajeros", "Ocultar", 0));
    } // retranslateUi

};

namespace Ui {
    class Pasajeros: public Ui_Pasajeros {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASAJEROS_H
