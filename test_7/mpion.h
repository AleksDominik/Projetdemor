#ifndef MPION_H
#define MPION_H

#include <QObject>

class Mpion : public QObject {

    Q_OBJECT

public:
    explicit Mpion(QObject *parent = 0);
    Q_INVOKABLE QString changementdim(int x,int y);
    Q_INVOKABLE bool peujouer();
   // Q_INVOKABLE void remplitlamat(int a, int b);



    Q_PROPERTY(QString imgQML READ readImg NOTIFY imgChanged);
    QString readImg();

signals:
    void imgChanged();
    void matricechanger();

public slots:
    //QString  changementdim();

private:
    QString image1= "p1.jpg";
    QString image2="p2.jpg";
    QString image= "index.jpg";
    int i;
    //int j=1;
    int sum1=0;
    int sum2=0;
    int tabpre[3][3]={{0,0,0},{0,0,0},{0,0,0}};
    //int tabpre2[3][3]={{0,0,0},{0,0,0},{0,0,0}};


















    //int piondujoueur2=0;
};

#endif // MPION_H
