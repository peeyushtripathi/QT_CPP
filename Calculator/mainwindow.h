#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

 // my declared function(slots)
private slots:
    void on_pushButton_clicked();
    void NumPressed();
    void MathButtonPressed();
    void EqualPressed();
    void ChangeNumberSign();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
