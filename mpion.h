
#ifndef MPION_H
#define MPION_H

#include <QObject>
#include <QMessageBox>

class Mpion : public QObject {

    Q_OBJECT

public:
    explicit Mpion(QObject *parent = 0);
     ~Mpion();
    Q_INVOKABLE QString changementdim(int x);
    Q_INVOKABLE bool remplissage();
    Q_INVOKABLE bool peutbouger(int x);
    Q_INVOKABLE bool findejeu();
    Q_INVOKABLE bool quijoue();
    Q_INVOKABLE bool mvtvalide(int x);

    Q_PROPERTY(QString imgQML READ readImg NOTIFY imgChanged);
    QString readImg();

signals:
    void imgChanged();

public slots:

private:
    QMessageBox test;
    QString image1= "p1.jpg";
    QString image2= "p2.jpg";
    QString image= "p0.jpg";
    int i;
    int sos;
    int sum1=0;
    int sum2=0;
    int tabpre[9]={0,0,0,0,0,0,0,0,0};
    QString ret;
    bool end=false;
    int* mvtOk = new int[9];
};

#endif // MPION_H
