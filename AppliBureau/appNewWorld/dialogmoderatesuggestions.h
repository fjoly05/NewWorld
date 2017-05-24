#ifndef DIALOGMODERATESUGGESTIONS_H
#define DIALOGMODERATESUGGESTIONS_H

#include <QDialog>
#include <QVector>
#include <QListWidget>

namespace Ui {
class DialogModerateSuggestions;
}

class DialogModerateSuggestions : public QDialog
{
    Q_OBJECT

public:
    explicit DialogModerateSuggestions(QWidget *parent = 0);
    void chargeLesSuggestions();
    void chargeLesSuggestionsDansVect();
    void chargeAcceptesRejetes();
    ~DialogModerateSuggestions();

private slots:
    void on_pushButtonAccept_clicked();

    void on_pushButtonReject_clicked();

    void on_pushButtonValidation_clicked();

    void on_listWidgetSuggestedProds_clicked(const QModelIndex &index);

    void on_pushButtonCancel_clicked();

    void on_listWidgetAcceptedProds_clicked(const QModelIndex &index);

    void on_listWidgetRejectedProds_clicked(const QModelIndex &index);

private:
    Ui::DialogModerateSuggestions *ui;
    QVector<int> vectIdProduitsAValide;
    QListWidget* selectedList;
};

#endif // DIALOGMODERATESUGGESTIONS_H
