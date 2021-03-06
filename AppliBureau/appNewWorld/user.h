#ifndef USER_H
#define USER_H
#include <QString>

class user
{
public:
    user();

    int getNumeroPersonnel() const;
    void setNumeroPersonnel(int value);

    QString getNom() const;
    void setNom(const QString &value);

    QString getPrenom() const;
    void setPrenom(const QString &value);

    QString getLogin() const;
    void setLogin(const QString &value);

    int getTypePersonnel() const;
    void setTypePersonnel(const int &value);

    QString getSsNumber() const;
    void setSsNumber(const QString &value);

    QString getMdp() const;
    void setMdp(const QString &value);

    QString getDateEmbauche() const;
    void setDateEmbauche(const QString &value);


    bool getSupprime() const;
    void setSupprime(bool value);

private:
    int numeroPersonnel;
    QString nom;
    QString prenom;
    QString login;
    int typePersonnel;
    QString ssNumber;
    QString mdp;
    QString dateEmbauche;
    bool supprime;
};

#endif // USER_H
