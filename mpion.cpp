#include "mpion.h"

Mpion::Mpion(QObject *parent) : QObject(parent) {
    i=0;
    imgChanged();
    for(int j=0; j<=8;j++)
        mvtOk[j]=0;
}

Mpion::~Mpion() {
    if(mvtOk!=NULL) {
        delete[] mvtOk;
        mvtOk=NULL;
    }
}

QString Mpion::readImg() {
    return ret;
}

bool Mpion::remplissage(){
    if(i%2==0) {
        if( sum1 <3 ) {
            return true;
        }
        else {
            return false;
        }
    }
    else {
        if( sum2 <3 ) {
            return true;
        }
        else {
            return false;
        }
    }
}

QString Mpion::changementdim(int x) {
    if(i<6 ) {
        if(i%2==0) {
            if(tabpre[x]==0) {
                tabpre[x]=1;
                sum1++;
                i++;
                return image1;
            }

        }
        else {
            if(tabpre[x]==0) {
                tabpre[x]=2;
                sum2++;
                i++;
                return image2;
            }
        }
    }
    else {
        if(i%2==0) {
            if(!remplissage()) {
                if(peutbouger(x)){
                    if(tabpre[x]==1) {
                        sum1--;
                        tabpre[x]=0;
                        sos=x;
                        return image;
                    }
                    else if(tabpre[x]==0){
                        return image;
                    }
                    else if(tabpre[x]==2) {
                        return image2;
                    }
                }
            }
            else {
                if(mvtvalide(x)) {
                    i++;
                    tabpre[x]=1;
                    sum1++;
                    return image1;
                }
                else {
                    if(tabpre[x]==1) {
                        return image1;
                    }
                    else if(x==sos) {
                        tabpre[x]=1;
                        sum1++;
                        return image1;
                    }
                    else if(tabpre[x]==0) {
                        return image;
                    }
                    else if(tabpre[x]==2) {
                        return image2;
                    }
                }
            }
        }
        else {
            if(!remplissage()) {
                if(peutbouger(x)) {
                    if(tabpre[x]==1) {
                        return image1;
                    }
                    else if(tabpre[x]==0) {
                        return image;
                    }
                    else if(tabpre[x]==2) {
                        sum2--;
                        tabpre[x]=0;
                        sos=x;
                        return image;
                    }
                }
            }
            else {
                if(mvtvalide(x)) {
                    i++;
                    sum2++;
                    tabpre[x]=2;
                    return image2;
                }
                else {
                    if(tabpre[x]==1) {
                        return image1;
                    }
                    else if(x==sos) {
                        tabpre[x]=2;
                        sum2++;
                        return image2;
                    }
                    else if(tabpre[x]==0) {
                        return image;
                    }
                    else if(tabpre[x]==2) {
                        return image2;
                    }
                }
            }
        }
    }
}

bool Mpion::findejeu() {
    int j;
    for(j=1;j<=7;j+=3)
        if((tabpre[j-1]==tabpre[j] && tabpre[j]==tabpre[j+1] && tabpre[j]==1) || (tabpre[j-1]==tabpre[j] && tabpre[j]==tabpre[j+1] && tabpre[j]==2)) {
            end = true;
        }
    for(j=3;j<=5;j++)
        if((tabpre[j-3]==tabpre[j] && tabpre[j]==tabpre[j+3] && tabpre[j]==1) || (tabpre[j-3]==tabpre[j] && tabpre[j]==tabpre[j+3] && tabpre[j]==2)) {
            end = true;
        }
    if((tabpre[0]==tabpre[4] && tabpre[4]==tabpre[8] && tabpre[0]==1) || (tabpre[0]==tabpre[4] && tabpre[4]==tabpre[8] && tabpre[0]==2)) {
        end = true;
    }
    if((tabpre[2]==tabpre[4] && tabpre[4]==tabpre[6] && tabpre[2]==1) || (tabpre[2]==tabpre[4] && tabpre[4]==tabpre[6] && tabpre[2]==2)) {
        end = true;
    }
    return end;
}

bool Mpion::quijoue() {
    if(i%2==0)
        return false;
    else
        return true;
}

bool Mpion::peutbouger(int x) {
    bool a = false;
    switch (x) {
    case 0:
        if(tabpre[1]==0) { mvtOk[1]=1; }
        if(tabpre[3]==0) { mvtOk[3]=1; }
        if(tabpre[4]==0) { mvtOk[4]=1; }
            a = true;
        break;
    case 1:
        if(tabpre[0]==0) { mvtOk[0]=1; }
        if(tabpre[2]==0) { mvtOk[2]=1; }
        if(tabpre[4]==0) { mvtOk[4]=1; }
            a = true;
        break;
    case 2:
        if(tabpre[1]==0) { mvtOk[1]=1; }
        if(tabpre[5]==0) { mvtOk[5]=1; }
        if(tabpre[4]==0) { mvtOk[4]=1; }
            a = true;
        break;
    case 3:
        if(tabpre[0]==0) { mvtOk[0]=1; }
        if(tabpre[6]==0) { mvtOk[6]=1; }
        if(tabpre[4]==0) { mvtOk[4]=1; }
            a = true;
        break;
    case 5:
        if(tabpre[2]==0) { mvtOk[2]=1; }
        if(tabpre[8]==0) { mvtOk[8]=1; }
        if(tabpre[4]==0) { mvtOk[4]=1; }
            a = true;
        break;
    case 6:
        if(tabpre[7]==0) { mvtOk[7]=1; }
        if(tabpre[3]==0) { mvtOk[3]=1; }
        if(tabpre[4]==0) { mvtOk[4]=1; }
            a = true;
        break;
    case 7:
        if(tabpre[6]==0) { mvtOk[6]=1; }
        if(tabpre[8]==0) { mvtOk[8]=1; }
        if(tabpre[4]==0) { mvtOk[4]=1; }
            a = true;
        break;
    case 8:
        if(tabpre[7]==0) { mvtOk[7]=1; }
        if(tabpre[5]==0) { mvtOk[5]=1; }
        if(tabpre[4]==0) { mvtOk[4]=1; }
            a = true;
        break;
    case 4:
        if(tabpre[0]==0) { mvtOk[0]=1; }
        if(tabpre[1]==0) { mvtOk[1]=1; }
        if(tabpre[2]==0) { mvtOk[2]=1; }
        if(tabpre[3]==0) { mvtOk[3]=1; }
        if(tabpre[5]==0) { mvtOk[5]=1; }
        if(tabpre[6]==0) { mvtOk[6]=1; }
        if(tabpre[7]==0) { mvtOk[7]=1; }
        if(tabpre[8]==0) { mvtOk[8]=1; }
            a = true;
        break;
    }
    return a;
}

bool Mpion::mvtvalide(int x) {
    bool a=false;
    if (mvtOk[x]==1) {
        a=true;
        for(int k=0; k<=8; k++)
            mvtOk[k]=0;
    }
    return a;
}

