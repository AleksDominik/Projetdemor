#include "morpion.h"

//methode de kase
kase::kase(QObject *parent,string Coo):QObject(parent )
 {
    m_color='000000';
    coordonnee=coo;
}
kase:: getcoord(const kase &D)
{   colorchanged();
    return coordonnee
}

kase::kase(string a):coordonnee(a)
{}
//methode de joueur




//methode de partie

