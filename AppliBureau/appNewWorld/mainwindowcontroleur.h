#ifndef MAINWINDOWCONTROLEUR_H
#define MAINWINDOWCONTROLEUR_H

#include <QMainWindow>

namespace Ui {
class MainWindowControleur;
}

class MainWindowControleur : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindowControleur(QWidget *parent = 0);
    ~MainWindowControleur();
    
private:
    Ui::MainWindowControleur *ui;
};

#endif // MAINWINDOWCONTROLEUR_H
