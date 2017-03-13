#include "morpion.h"

Compteur::Compteur(QObject *parent) : QObject(parent)
{
    fCompteur=10;
    cptChanged();
}

QString Compteur::readCompteur()
{
    return QString::number(fCompteur);
}

void kase::colorChanged() {

}

void Compteur::decrement() {
    if (fCompteur>-1) {
        fCompteur--;
        cptChanged();
    }
}
