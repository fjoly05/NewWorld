#ifndef DIALOGMODERATESUGGESTIONS_H
#define DIALOGMODERATESUGGESTIONS_H

#include <QDialog>

namespace Ui {
class DialogModerateSuggestions;
}

class DialogModerateSuggestions : public QDialog
{
    Q_OBJECT

public:
    explicit DialogModerateSuggestions(QWidget *parent = 0);
    void chargeLesSuggestions();
    ~DialogModerateSuggestions();

private slots:
    void on_pushButtonAccept_clicked();

    void on_pushButtonReject_clicked();

    void on_pushButtonValidation_clicked();

private:
    Ui::DialogModerateSuggestions *ui;
};

#endif // DIALOGMODERATESUGGESTIONS_H
