#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_clientpageButton_clicked();

    void on_serverpageButton_clicked();

    void on_downloadpageButton_clicked();

    void on_natpageButton_clicked();

    void on_otherpageButton_clicked();

    void on_clientdownloadButton_clicked();

    void on_serverdownloadButton_clicked();

    void on_moddownloadButton_clicked();

    void on_plugdownloadButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
