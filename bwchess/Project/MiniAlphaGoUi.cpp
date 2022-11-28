#include "MiniAlphaGoUi.h"
#include "ui_minialphagoui.h"
#include "minialphagoboard.h"
#include "minialphagomgr.h"

//constructor
MiniAlphaGoUi::MiniAlphaGoUi(QWidget *parent) :
    QMainWindow(parent)
{
    this->createLogin();
}

// deconstructor
MiniAlphaGoUi::~MiniAlphaGoUi()
{
    if (name != nullptr) {
        delete name;
        name = nullptr;
    }

    if(player_first != nullptr) {
        delete player_first;
        player_first = nullptr;
    }

    if(ai_first != nullptr) {
        delete ai_first;
        ai_first = nullptr;
    }
}

//create login
void MiniAlphaGoUi::createLogin()
{
    // set window title
    setWindowTitle("Mini Alpha Go");

    //set background color
    QPalette pal = palette();
    pal.setColor(QPalette::Background, Qt::black);
    setPalette(pal);

    //set name
    name = new QLabel(this);
    name->setText("Login");
    name->setGeometry(200,50,350,100);
    name->setStyleSheet("color:white; font: 20px; background: red");
    name->setAlignment(Qt::AlignCenter);

    // set acount
    acount = new QLineEdit(this);
    acount->setEchoMode(QLineEdit::Normal);
    acount->setGeometry(300,250,200,30);
    acount->setMaxLength(8);
    acount->setAlignment(Qt::AlignLeft);

    // set password
    password = new QLineEdit(this);
    password->setEchoMode(QLineEdit::Password);
    password->setGeometry(300,310,200,30);
    password->setMaxLength(8);
    password->setAlignment(Qt::AlignLeft);

    // set ac label
    ac = new QLabel(this);
    ac->setText("acount");
    ac->setGeometry(200,250,100,30);
    ac->setStyleSheet("color:white; font: 20px; background: black");
    ac->setAlignment(Qt::AlignCenter);

    // set pa label
    pa = new QLabel(this);
    pa->setText("password");
    pa->setGeometry(200,310,100,30);
    pa->setStyleSheet("color:white; font: 20px; background: black");
    pa->setAlignment(Qt::AlignCenter);

    // set button(Login)
    Login = new QPushButton(this);
    Login->setText("Login");
    Login->setGeometry(300,390,100,50);
    Login->setStyleSheet("color:white; font: 25px; background: red");
    QObject::connect(Login, &QPushButton::clicked, this, &MiniAlphaGoUi::manager);

    setFixedSize(750,470);
}

// create game ui
void MiniAlphaGoUi::createGameUi()
{
    // set name
    name = new QLabel(this);
    name->setText("MiniAlphaGo");
    name->setGeometry(200,50,350,100);
    name->setStyleSheet("color:white; font: 20px; background: red");
    name->setAlignment(Qt::AlignCenter);

    // player first(button)
    player_first = new QPushButton("PLAYER FIRST", this);
    player_first->setGeometry(250,250,250,70);
    player_first->setStyleSheet("color: black; font: 25px; background: white");
    QObject::connect(player_first, &QPushButton::clicked, this, &MiniAlphaGoUi::playerFirst);

    // ai first(button)
    ai_first = new QPushButton("AI_FIRST",this);
    ai_first->setGeometry(250,350,250,70);
    ai_first->setStyleSheet("color: black; font: 25px; background: white");
    QObject::connect(ai_first, &QPushButton::clicked, this, &MiniAlphaGoUi::aiFirst);

    setFixedSize(750,470);
}

// player first
void MiniAlphaGoUi::playerFirst()
{
    // close window
    close();

    // switch first
    MiniAlphaGoBoard::getInstance().switchFirst(NS_MAGBORAD::PLAYER_FIRST);

    //record init first
    MiniAlphaGoBoard::getInstance().init_first = NS_MAGBORAD::PLAYER_FIRST;

    // init start time of single step
    MiniAlphaGoMgr::getInstance().initSingleTime();

    //show board
    MiniAlphaGoBoard::getInstance().show();
}

//ai first
void MiniAlphaGoUi::aiFirst()
{
    // close window
    close();

    // switch first
    MiniAlphaGoBoard::getInstance().switchFirst(NS_MAGBORAD::AI_FIRST);

    //record init first
    MiniAlphaGoBoard::getInstance().init_first = NS_MAGBORAD::AI_FIRST;

    // init start time of single step
    MiniAlphaGoMgr::getInstance().initSingleTime();

    //show board
    MiniAlphaGoBoard::getInstance().show();

    // ai play chess
    MiniAlphaGoMgr::getInstance().updateBoard(NS_MAGBORAD::AI_FIRST);
}

void MiniAlphaGoUi::gettext()
{
    am = acount->text();
    pw = password->text();
    return;
}

void MiniAlphaGoUi::manager()
{
    gettext();
    if (am == "ydydydyd"){
        if (pw == "yd020513"){

            close();

            this->del();

            this->createGameUi();

            this->show();
        }
        else{
            QMessageBox::information(NULL,"","Wrong Password!",QMessageBox::Ok);
        }
    }else{
         QMessageBox::information(NULL,"","Wrong Acount!",QMessageBox::Ok);
    }
}

void MiniAlphaGoUi::del()
{
    delete acount;
    delete ac;
    delete pa;
    delete Login;
    delete password;
}
