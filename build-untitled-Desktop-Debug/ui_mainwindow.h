/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Nowy;
    QAction *action_Otworz;
    QAction *action_Zapisz;
    QAction *actionZ_apisz_jako;
    QAction *action_Zamknij;
    QAction *action_Wytnij;
    QAction *action_Kopiuj;
    QAction *actionW_klej;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menuPlik;
    QMenu *menuEdycja;
    QMenu *menuSzukanie;
    QMenu *menuPomoc;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        action_Nowy = new QAction(MainWindow);
        action_Nowy->setObjectName(QStringLiteral("action_Nowy"));
        action_Otworz = new QAction(MainWindow);
        action_Otworz->setObjectName(QStringLiteral("action_Otworz"));
        action_Zapisz = new QAction(MainWindow);
        action_Zapisz->setObjectName(QStringLiteral("action_Zapisz"));
        actionZ_apisz_jako = new QAction(MainWindow);
        actionZ_apisz_jako->setObjectName(QStringLiteral("actionZ_apisz_jako"));
        action_Zamknij = new QAction(MainWindow);
        action_Zamknij->setObjectName(QStringLiteral("action_Zamknij"));
        action_Wytnij = new QAction(MainWindow);
        action_Wytnij->setObjectName(QStringLiteral("action_Wytnij"));
        action_Kopiuj = new QAction(MainWindow);
        action_Kopiuj->setObjectName(QStringLiteral("action_Kopiuj"));
        actionW_klej = new QAction(MainWindow);
        actionW_klej->setObjectName(QStringLiteral("actionW_klej"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 27));
        menuPlik = new QMenu(menuBar);
        menuPlik->setObjectName(QStringLiteral("menuPlik"));
        menuEdycja = new QMenu(menuBar);
        menuEdycja->setObjectName(QStringLiteral("menuEdycja"));
        menuSzukanie = new QMenu(menuBar);
        menuSzukanie->setObjectName(QStringLiteral("menuSzukanie"));
        menuPomoc = new QMenu(menuBar);
        menuPomoc->setObjectName(QStringLiteral("menuPomoc"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuPlik->menuAction());
        menuBar->addAction(menuEdycja->menuAction());
        menuBar->addAction(menuSzukanie->menuAction());
        menuBar->addAction(menuPomoc->menuAction());
        menuPlik->addAction(action_Nowy);
        menuPlik->addAction(action_Otworz);
        menuPlik->addSeparator();
        menuPlik->addAction(action_Zapisz);
        menuPlik->addAction(actionZ_apisz_jako);
        menuPlik->addSeparator();
        menuPlik->addAction(action_Zamknij);
        menuEdycja->addAction(action_Wytnij);
        menuEdycja->addAction(action_Kopiuj);
        menuEdycja->addAction(actionW_klej);

        retranslateUi(MainWindow);
        QObject::connect(action_Wytnij, SIGNAL(triggered()), textEdit, SLOT(cut()));
        QObject::connect(actionW_klej, SIGNAL(triggered()), textEdit, SLOT(paste()));
        QObject::connect(action_Kopiuj, SIGNAL(triggered()), textEdit, SLOT(copy()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        action_Nowy->setText(QApplication::translate("MainWindow", "&Nowy", 0));
        action_Nowy->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0));
        action_Otworz->setText(QApplication::translate("MainWindow", "&Otworz", 0));
        action_Otworz->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
        action_Zapisz->setText(QApplication::translate("MainWindow", "&Zapisz", 0));
        action_Zapisz->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
        actionZ_apisz_jako->setText(QApplication::translate("MainWindow", "Z&apisz jako ...", 0));
        actionZ_apisz_jako->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+S", 0));
        action_Zamknij->setText(QApplication::translate("MainWindow", "Zamkni&j", 0));
        action_Zamknij->setShortcut(QApplication::translate("MainWindow", "Ctrl+W", 0));
        action_Wytnij->setText(QApplication::translate("MainWindow", "&Wytnij", 0));
        action_Wytnij->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", 0));
        action_Kopiuj->setText(QApplication::translate("MainWindow", "&Skopiuj", 0));
        action_Kopiuj->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", 0));
        actionW_klej->setText(QApplication::translate("MainWindow", "W&klej", 0));
        actionW_klej->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", 0));
        menuPlik->setTitle(QApplication::translate("MainWindow", "&Plik", 0));
        menuEdycja->setTitle(QApplication::translate("MainWindow", "&Edycja", 0));
        menuSzukanie->setTitle(QApplication::translate("MainWindow", "&Szukanie", 0));
        menuPomoc->setTitle(QApplication::translate("MainWindow", "&Pomoc", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
