#ifndef MINIALPHAGOUI_H
#define MINIALPHAGOUI_H

#include <QMainWindow>
#include <QPushButton>
#include <QPalette>
#include <QLabel>
#include <QString>
#include <QLineEdit>
#include <QPainter>
#include <cstdint>
#include <cstdio>

QT_BEGIN_NAMESPACE
namespace Ui {
class MiniAlphaGoUi;
}QT_END_NAMESPACE

class MiniAlphaGoUi : public QMainWindow
{
    Q_OBJECT

public:
    static MiniAlphaGoUi &getInstance()
    {
        static MiniAlphaGoUi _instance;
        return _instance;
    }

    ~MiniAlphaGoUi();

private:
    explicit MiniAlphaGoUi(QWidget *parent = nullptr);

    void createLogin();

    void createGameUi();

    void playerFirst();

    void aiFirst();

    void manager();

    void gettext();

    void del();

private:

    QLabel *name;
    QLabel *ac;
    QLabel *pa;

    QPushButton *ai_first;
    QPushButton *player_first;
    QPushButton *Login;

    QLineEdit *acount;
    QLineEdit *password;

    QString am;
    QString pw;

private:
    Ui::MiniAlphaGoUi *ui;
};

#endif // MINIALPHAGOUI_H
