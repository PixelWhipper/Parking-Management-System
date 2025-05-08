#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QMessageBox>
#include <QCheckBox>
#include <QTextEdit>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void attemptLogin();
    void showDashboard();
    void incrementSpot();
    void decrementSpot();
    void toggleParkingLog(bool checked);

private:
    Ui::MainWindow *ui;
    int availableSpots;
    int occupiedSpots;

    void updateSpotLabels();
    void logParkingEvent(const QString& event);
};
#endif // MAINWINDOW_H
