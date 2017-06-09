#ifndef DIALOGINFOCONTROLEUR_H
#define DIALOGINFOCONTROLEUR_H

#include <QDialog>

namespace Ui {
class DialogInfoControleur;
}

class DialogInfoControleur : public QDialog
{
    Q_OBJECT

public:
    explicit DialogInfoControleur(QString idCtrler, QString laDate, QWidget *parent = 0);
    void remplirList();
    ~DialogInfoControleur();

private slots:
    void on_listWidget_clicked(const QModelIndex &index);

    void on_pushButtonOk_clicked();

private:
    Ui::DialogInfoControleur *ui;
    QString lidCtrler;
    QString maDate;
};

#endif // DIALOGINFOCONTROLEUR_H
