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
    void on_xButton_clicked();

    void on_oButton_clicked();

    void on_gameButton_clicked();

private:
    Ui::MainWindow *ui;
    bool playerType;
    bool isRunning;
};
#endif // MAINWINDOW_H
