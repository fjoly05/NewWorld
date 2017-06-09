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
    explicit DialogInfoControleur(QWidget *parent = 0);
    ~DialogInfoControleur();

private:
    Ui::DialogInfoControleur *ui;
};

#endif // DIALOGINFOCONTROLEUR_H
