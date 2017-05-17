#ifndef DIALOGCONNECTION_H
#define DIALOGCONNECTION_H

#include <QDialog>

namespace Ui {
class DialogConnection;
}

class DialogConnection : public QDialog
{
    Q_OBJECT
    
public:
    explicit DialogConnection(QWidget *parent = 0);
    QString getMail();
    QString getPassword();
    ~DialogConnection();
    
private slots:
    void on_pushButtonQuit_clicked();

    void on_pushButtonConnection_clicked();

private:
    Ui::DialogConnection *ui;
    QString mail;
    QString password;
};

#endif // DIALOGCONNECTION_H
