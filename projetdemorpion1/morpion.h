#ifndef MORPION_H
#define MORPION_H
#include <QObject>

class jeumorpion : public QObject
{
    Q_OBJECT

  public:
Q_INVOKABLE void getcolor();
Q_INVOKABLE void getindex();
Q_INVOKABLE void joueur2();
QString getcoord(kase const&  D);
explicit kase (QObject *parent = 0);

signals:
colorChanged();

public slots:
void ajouer();

private:
QString nomdelapartie;
int index=0;
QColor  couleurdujoeur1='ff0000';
QColor  couleurdujoeur2='ff0000';
QString coordonnee ;



}



#endif // MORPION_H
