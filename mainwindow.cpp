#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowMinMaxButtonsHint);

    ui->btnSet->setText("");
    ui->btnSet->setStyleSheet("QPushButton{background-image:url(:/resources/set.png);border:none}  \
        QPushButton::hover{background-color:rgb(99,99,99)}");

    ui->btnMin->setText("");
    ui->btnMin->setStyleSheet("QPushButton{background-image:url(:/resources/min.png);border:none}  \
        QPushButton::hover{background-color:rgb(99,99,99)}");

    ui->btnClose->setText("");
    ui->btnClose->setStyleSheet("QPushButton{background-image:url(:/resources/close.png);border:none}  \
        QPushButton::hover{background-color:rgb(99,99,99)}");

    ui->label_logo->clear();
    QPixmap* pix = new QPixmap(":/resources/logo.jpg");
    pix->scaled(ui->label_logo->size(), Qt::KeepAspectRatio);
    ui->label_logo->setScaledContents(true);
    ui->label_logo->setPixmap(*pix);

    ui->btnLogin->setText("");
    ui->btnLogin->setStyleSheet("QPushButton{background-image:url(./resources/weichatlogin.png);border:none}  \
        QPushButton::hover{background-color:rgb(99,99,99)}");

    ui->toolBtnPhone->setIcon(QIcon(":/resources/phonelogin.png"));
    ui->toolBtnPhone->setIconSize(QSize(60, 60));
    ui->toolBtnPhone->setText(u8"手机号");
    ui->toolBtnPhone->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    ui->toolBtnPhone->setStyleSheet("background-color:white;border:none");

    ui->toolBtnEnpriseWeichat->setIcon(QIcon(":/resources/enpriseweichat.png"));
    ui->toolBtnEnpriseWeichat->setIconSize(QSize(60, 60));
    ui->toolBtnEnpriseWeichat->setText(u8"微信");
    ui->toolBtnEnpriseWeichat->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    ui->toolBtnEnpriseWeichat->setStyleSheet("background-color:white;border:none");

    ui->toolBtnSSO->setIcon(QIcon(":/resources/sso.png"));
    ui->toolBtnSSO->setIconSize(QSize(60, 60));
    ui->toolBtnSSO->setText(u8"SSO");
    ui->toolBtnSSO->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    ui->toolBtnSSO->setStyleSheet("background-color:white;border:none");

    connect(ui->btnClose, &QPushButton::clicked, [=] {
        close();
        });
}

MainWindow::~MainWindow()
{

    delete ui;
}
