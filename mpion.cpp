#include "mpion.h"

Mpion::Mpion(QObject *parent) : QObject(parent) {
    image1="p1.jpg";
    image2="p2.jpg";
    i=0;
    imgChanged();
}

QString Mpion::readImg() {
    return image;
}

void Mpion::changement()
{
    if(i%2==1) {
        i++;
        image=image1;
        imgChanged();
    }
    else {
        i++;
        image=image2;
        imgChanged();
    }
}
