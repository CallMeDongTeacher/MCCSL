#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QGraphicsDropShadowEffect>
#include<QToolButton>
#include<QPixmap>
#include<QStyle>
#include<QApplication>
#include<QTabWidget>
#include<QGridLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlag(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);
    int wide = width();

    //设置最小化、关闭按钮图标
    ui->minButton->setIcon(QIcon(":/Button_image/min.png"));
    ui->closeButton->setIcon(QIcon(":/Button_image/close.png"));

    //设置最小化、关闭按钮在界面的位置
    ui->closeButton->setGeometry(wide-40,15,24,24);
    ui->minButton->setGeometry(wide-70,15,24,24);

    //设置鼠标移至按钮上的提示信息
    ui->closeButton->setToolTip(tr("关闭"));
    ui->minButton->setToolTip(tr("最小化"));

    //设置最小化、关闭按钮的样式
    ui->closeButton->setStyleSheet("QPushButton{background-color:transparent;}");
    ui->minButton->setStyleSheet("QPushButton{background-color:transparent;}");

    connect(ui->closeButton, SIGNAL(clicked()), this, SLOT(close()));
    connect(ui->minButton, SIGNAL(clicked()), this, SLOT(showMinimized()));

    //设置字体
    ui->clientpageButton->setStyleSheet("QPushButton{font-family:'微软雅黑';font-size:25px;}");
    ui->serverpageButton->setStyleSheet("QPushButton{font-family:'微软雅黑';font-size:25px;}");
    ui->downloadpageButton->setStyleSheet("QPushButton{font-family:'微软雅黑';font-size:25px;}");
    ui->natpageButton->setStyleSheet("QPushButton{font-family:'微软雅黑';font-size:25px;}");
    ui->otherpageButton->setStyleSheet("QPushButton{font-family:'微软雅黑';font-size:25px;}");

    //设置大小
    ui->clientpageButton->setGeometry(0,100,160,80);
    ui->serverpageButton->setGeometry(0,180,160,80);
    ui->downloadpageButton->setGeometry(0,260,160,80);
    ui->natpageButton->setGeometry(0,340,160,80);
    ui->otherpageButton->setGeometry(0,420,160,80);

    ui->clientdownloadButton->setGeometry(320,100,160,80);
    ui->serverdownloadButton->setGeometry(320,200,160,80);
    ui->moddownloadButton->setGeometry(320,300,160,80);
    ui->plugdownloadButton->setGeometry(320,400,160,80);
    ui->download->setGeometry(362,10,70,40);
    ui->pludown->setGeometry(342,10,140,40);


    ui->clientdownloadButton->setStyleSheet("QPushButton{font-family:'微软雅黑';font-size:25px;}");
    ui->serverdownloadButton->setStyleSheet("QPushButton{font-family:'微软雅黑';font-size:25px;}");
    ui->moddownloadButton->setStyleSheet("QPushButton{font-family:'微软雅黑';font-size:25px;}");
    ui->plugdownloadButton->setStyleSheet("QPushButton{font-family:'微软雅黑';font-size:25px;}");

    //设置tooltip
    ui->clientpageButton->setToolTip(tr("查看/管理/启动已经安装的我的世界客户端"));
    ui->serverpageButton->setToolTip(tr("查看/管理/启动已经安装的我的世界服务端"));
    ui->downloadpageButton->setToolTip(tr("下载客户端/模组/服务端/插件等各种资源"));
    ui->natpageButton->setToolTip(tr("内网穿透(没错，还没完工>_<)"));
    ui->otherpageButton->setToolTip(tr("关于MCCSL的制作>_<"));

    //初始化stackedwidget
    ui->stackedWidget->setCurrentIndex(3);

}

MainWindow::~MainWindow()
{
    delete ui;
}

//一大堆切换stackedwidget的函数，一共10个页面，编号0~9
void MainWindow::on_clientpageButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_serverpageButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_downloadpageButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_natpageButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_otherpageButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_clientdownloadButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}

void MainWindow::on_serverdownloadButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}

void MainWindow::on_moddownloadButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}

void MainWindow::on_plugdownloadButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);
}
