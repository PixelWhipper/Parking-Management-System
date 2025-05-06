#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <memory> // For std::unique_ptr

// Forward declarations
namespace Ui {
class MainWindow;
}
class DashboardWindow; // Forward declare DashboardWindow

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_submit_clicked();
    void on_label_forgot_linkActivated(const QString &link);

private:
    void centerWindow();
    std::unique_ptr<Ui::MainWindow> ui;
    DashboardWindow *dashboardWindow; // Pointer to the dashboard window
};

#endif // MAINWINDOW_H
