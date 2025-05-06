#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QMainWindow>
#include <memory> // For std::unique_ptr
#include <QShowEvent> // Include for showEvent

// Forward declarations
namespace Ui {
class DashboardWindow;
}
class MainWindow; // Forward declare MainWindow for logout

class DashboardWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit DashboardWindow(QWidget *parent = nullptr);
    ~DashboardWindow();

private slots:
    void on_pushButton_logout_clicked();

protected: // Add showEvent here
    void showEvent(QShowEvent *event) override;


private:
    void populateDashboardData();
    void centerWindow();
    std::unique_ptr<Ui::DashboardWindow> ui;
    MainWindow *loginWindow; // Pointer to re-open login window
};

#endif // DASHBOARD_H
