#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMap>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void Login();
    void Signup();
    void switchSignup();
    void switchLogin();
    void on_adminButton_clicked();
    void on_userButton_clicked();

private:
    Ui::MainWindow *ui;
    QMap<QString, QString> userDatabase;
};

#endif
