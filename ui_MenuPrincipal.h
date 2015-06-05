/********************************************************************************
** Form generated from reading UI file 'MenuPrincipal.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUPRINCIPAL_H
#define UI_MENUPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuPrincipal
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *Reservacion;
    QPushButton *AltaV;
    QPushButton *Busqueda;
    QPushButton *Salir;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MenuPrincipal)
    {
        if (MenuPrincipal->objectName().isEmpty())
            MenuPrincipal->setObjectName(QStringLiteral("MenuPrincipal"));
        MenuPrincipal->setWindowModality(Qt::NonModal);
        MenuPrincipal->resize(850, 510);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MenuPrincipal->sizePolicy().hasHeightForWidth());
        MenuPrincipal->setSizePolicy(sizePolicy);
        MenuPrincipal->setMinimumSize(QSize(850, 510));
        MenuPrincipal->setMaximumSize(QSize(850, 510));
        QIcon icon;
        icon.addFile(QStringLiteral(":/1404781849343.png"), QSize(), QIcon::Normal, QIcon::Off);
        MenuPrincipal->setWindowIcon(icon);
        MenuPrincipal->setAnimated(false);
        centralwidget = new QWidget(MenuPrincipal);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Reservacion = new QPushButton(centralwidget);
        Reservacion->setObjectName(QStringLiteral("Reservacion"));

        verticalLayout->addWidget(Reservacion);

        AltaV = new QPushButton(centralwidget);
        AltaV->setObjectName(QStringLiteral("AltaV"));

        verticalLayout->addWidget(AltaV);

        Busqueda = new QPushButton(centralwidget);
        Busqueda->setObjectName(QStringLiteral("Busqueda"));

        verticalLayout->addWidget(Busqueda);

        Salir = new QPushButton(centralwidget);
        Salir->setObjectName(QStringLiteral("Salir"));

        verticalLayout->addWidget(Salir);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(650, 450, QSizePolicy::Minimum, QSizePolicy::Fixed);

        horizontalLayout->addItem(horizontalSpacer);

        MenuPrincipal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MenuPrincipal);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 850, 25));
        MenuPrincipal->setMenuBar(menubar);
        statusbar = new QStatusBar(MenuPrincipal);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MenuPrincipal->setStatusBar(statusbar);

        retranslateUi(MenuPrincipal);

        QMetaObject::connectSlotsByName(MenuPrincipal);
    } // setupUi

    void retranslateUi(QMainWindow *MenuPrincipal)
    {
        MenuPrincipal->setWindowTitle(QApplication::translate("MenuPrincipal", "MainWindow", 0));
        Reservacion->setText(QApplication::translate("MenuPrincipal", "Reservacion", 0));
        AltaV->setText(QApplication::translate("MenuPrincipal", "Alta Vuelo", 0));
        Busqueda->setText(QApplication::translate("MenuPrincipal", "Buscar", 0));
        Salir->setText(QApplication::translate("MenuPrincipal", "Salir", 0));
    } // retranslateUi

};

namespace Ui {
    class MenuPrincipal: public Ui_MenuPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUPRINCIPAL_H
