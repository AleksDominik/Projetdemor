#ifndef MORPION_H
#define MORPION_H
#include <QObject>

class kase : public QObject
{
    Q_OBJECT
  public:


Q_INVOKABLE void joueur1();
Q_INVOKABLE void joueur2();
void colorChanged();
void textChanged(const QString &newText);
kase(string a)  ;
signals:


private:
 QColor  m_color='ff0000';
 String coordonnee ;



#endif // MORPION_H
