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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MiniAlphaGoUi
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTextBrowser *textBrowser;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MiniAlphaGoUi)
    {
        if (MiniAlphaGoUi->objectName().isEmpty())
            MiniAlphaGoUi->setObjectName(QStringLiteral("MiniAlphaGoUi"));
        MiniAlphaGoUi->resize(758, 579);
        centralWidget = new QWidget(MiniAlphaGoUi);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(180, 420, 93, 28));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(280, 420, 93, 28));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(220, 370, 321, 20));
        MiniAlphaGoUi->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MiniAlphaGoUi);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 758, 26));
        MiniAlphaGoUi->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MiniAlphaGoUi);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MiniAlphaGoUi->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MiniAlphaGoUi);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MiniAlphaGoUi->setStatusBar(statusBar);

        retranslateUi(MiniAlphaGoUi);

        QMetaObject::connectSlotsByName(MiniAlphaGoUi);
    } // setupUi

    void retranslateUi(QMainWindow *MiniAlphaGoUi)
    {
        MiniAlphaGoUi->setWindowTitle(QApplication::translate("MiniAlphaGoUi", "MiniAlphaGoUi", nullptr));
        pushButton->setText(QApplication::translate("MiniAlphaGoUi", "PushButton", nullptr));
        pushButton_2->setText(QApplication::translate("MiniAlphaGoUi", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MiniAlphaGoUi: public Ui_MiniAlphaGoUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MINIALPHAGOUI_H
