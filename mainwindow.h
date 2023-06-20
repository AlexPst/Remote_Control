#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void digitsButtonPush();
    void plusButton();
    void minusButton();
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    int countVol;
};
#endif // MAINWINDOW_H
