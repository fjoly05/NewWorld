#include "user.h"

user::user()
{
}
int user::getNumeroPersonnel() const
{
    return numeroPersonnel;
}

void user::setNumeroPersonnel(int value)
{
    numeroPersonnel = value;
}
QString user::getNom() const
{
    return nom;
}

void user::setNom(const QString &value)
{
    nom = value;
}
QString user::getPrenom() const
{
    return prenom;
}

void user::setPrenom(const QString &value)
{
    prenom = value;
}
QString user::getEmail() const
{
    return email;
}

void user::setEmail(const QString &value)
{
    email = value;
}
QString user::getTypePersonnel() const
{
    return typePersonnel;
}

void user::setTypePersonnel(const QString &value)
{
    typePersonnel = value;
}
QString user::getSsNumber() const
{
    return ssNumber;
}

void user::setSsNumber(const QString &value)
{
    ssNumber = value;
}
QString user::getMdp() const
{
    return mdp;
}

void user::setMdp(const QString &value)
{
    mdp = value;
}
QString user::getDateEmbauche() const
{
    return dateEmbauche;
}

void user::setDateEmbauche(const QString &value)
{
    dateEmbauche = value;
}
bool user::getSupprime() const
{
    return supprime;
}

void user::setSupprime(bool value)
{
    supprime = value;
}










