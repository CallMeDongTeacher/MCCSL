#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QScreen>
#include <QGuiApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // 获取主屏幕
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();  // 屏幕完整尺寸
    int screenWidth = screenGeometry.width();
    int screenHeight = screenGeometry.height();

    // 设置窗口大小为屏幕的 80%（宽度和高度都按比例）
    double sizeRatio = 0.5;
    int windowWidth = static_cast<int>(screenWidth * sizeRatio);
    int windowHeight = static_cast<int>(screenHeight * sizeRatio);
    resize(windowWidth, windowHeight);

    // 可选：将窗口居中显示
    move((screenWidth - windowWidth) / 2, (screenHeight - windowHeight) / 2);

    setMinimumSize(static_cast<int>(screenWidth * 0.2), static_cast<int>(screenHeight * 0.2));

}

MainWindow::~MainWindow()
{
    delete ui;
}
