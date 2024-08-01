#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <map>
#include <QPushButton>

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

    void gameLogic();

private:
    Ui::MainWindow *ui;
    std::map<int, QPushButton*> board;
    bool playerType;
    bool isRunning;
    bool isPlayerMove;
    void botMove();
    bool isEmptyCells(Ui::MainWindow &ui);
    bool checkWin(bool playerType);

};
#endif // MAINWINDOW_H
