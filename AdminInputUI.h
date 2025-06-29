#ifndef ADMININPUTUI_H
#define ADMININPUTUI_H

#include <QWidget>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class AdminInputUI; }
QT_END_NAMESPACE

class AdminInputUI : public QWidget
{
    Q_OBJECT

public:
    AdminInputUI(QWidget *parent = nullptr);
    ~AdminInputUI();

signals:
    void finished();

private slots:
    void on_saveButton_clicked();
    void on_addCustomRateButton_clicked();
    void on_editCustomRateButton_clicked();
    void on_deleteCustomRateButton_clicked();

protected:
    void closeEvent(QCloseEvent *event) override;

private:
    Ui::AdminInputUI *ui    ;
    void clearForm();
    bool validateInput();
};

#endif
