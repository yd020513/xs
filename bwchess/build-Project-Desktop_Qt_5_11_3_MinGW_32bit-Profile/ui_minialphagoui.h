/********************************************************************************
** Form generated from reading UI file 'minialphagoui.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MINIALPHAGOUI_H
#define UI_MINIALPHAGOUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MiniAlphaGoUi
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MiniAlphaGoUi)
    {
        if (MiniAlphaGoUi->objectName().isEmpty())
            MiniAlphaGoUi->setObjectName(QStringLiteral("MiniAlphaGoUi"));
        MiniAlphaGoUi->resize(400, 300);
        menuBar = new QMenuBar(MiniAlphaGoUi);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        MiniAlphaGoUi->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MiniAlphaGoUi);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MiniAlphaGoUi->addToolBar(mainToolBar);
        centralWidget = new QWidget(MiniAlphaGoUi);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MiniAlphaGoUi->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MiniAlphaGoUi);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MiniAlphaGoUi->setStatusBar(statusBar);

        retranslateUi(MiniAlphaGoUi);

        QMetaObject::connectSlotsByName(MiniAlphaGoUi);
    } // setupUi

    void retranslateUi(QMainWindow *MiniAlphaGoUi)
    {
        MiniAlphaGoUi->setWindowTitle(QApplication::translate("MiniAlphaGoUi", "MiniAlphaGoUi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MiniAlphaGoUi: public Ui_MiniAlphaGoUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MINIALPHAGOUI_H
