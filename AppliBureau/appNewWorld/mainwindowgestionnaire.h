#ifndef MAINWINDOWGESTIONNAIRE_H
#define MAINWINDOWGESTIONNAIRE_H

#include <QMainWindow>
#include "user.h"

namespace Ui {
class MainWindowGestionnaire;
}

class MainWindowGestionnaire : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindowGestionnaire(QWidget *parent = 0);
    QString passwordGeneration (int lenght);
    void chargeLeTableau();
    void chargeLesListes();
    void checkLineEdits();
    ~MainWindowGestionnaire();
    
private slots:
    void on_pushButtonAdd_clicked();

    void on_tableWidget_cellClicked(int row, int column);

    void on_pushButtonDelete_clicked();

    void on_pushButtonClear_clicked();

    void on_pushButtonEdit_clicked();

    void on_lineEditSecuriteSociale_textChanged(const QString &arg1);

    void on_lineEditFirstName_textChanged(const QString &arg1);

    void on_lineEditLastName_textChanged(const QString &arg1);

    void on_lineEditEmail_textChanged(const QString &arg1);

    void on_radioButtonManager_clicked();

    void on_radioButtonController_clicked();

private:
    Ui::MainWindowGestionnaire *ui;
};

#endif // MAINWINDOWGESTIONNAIRE_H
