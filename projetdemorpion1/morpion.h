#ifndef MORPION_H
#define MORPION_H
#include <QObject>

class kase : public QObject
{
    Q_OBJECT
  public:


Q_INVOKABLE void joueur1();
Q_INVOKABLE void joueur2();
void textChanged(const QString &newText);
kase(string a)  ;
signals:
colorChanged();
private:
 QColor  m_color='ff0000';
 QString coordonnee ;
};
class joueur: public QObject
 {
    Q_OBJECT
public:
joueur( QColor b);
 kase(string a)  ;
 signals:

private:
int index=0;
};
class partie : public QObject
       {

    Q_OBJECT
  public:


Q_INVOKABLE void increment();
void textChanged(const QString &newText);
kase(string a)  ;
signals:
colorChanged();
private:
 QColor  m_color='ff0000';
 QString coordonnee ;

};



#endif // MORPION_H
