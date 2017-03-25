#ifndef MPION_H
#define MPION_H

#include <QObject>

class Mpion : public QObject
{
    Q_OBJECT
public:
    explicit Mpion(QObject *parent = 0);
    Q_INVOKABLE void changement();

    Q_PROPERTY(QString imgQML READ readImg NOTIFY imgChanged);
    QString readImg();

signals:
    void imgChanged();

public slots:

private:
    QString image1;
    QString image2;
    QString image;
    int i;
};

#endif // MPION_H
