#include "mpion.h"
#include <iostream>
#include <string>
using namespace std;

Mpion::Mpion(QObject *parent) : QObject(parent) {
    image1="p1.jpg";
    image2="p2.jpg";
    i=0;
    imgChanged();

}

QString Mpion::readImg() {
    return image;
}
bool Mpion::peujouer(){
    if(i%2==0){
   if( sum1 <3 ){return true;}
   else{ return false;}
    }
    else{
        if( sum2 <3 ){ return true;}
        else{ return false;}
         }

    }

QString Mpion::changementdim(int x,int y)
{   if(i<6 )
    {
     if(i%2==0)
        { if(tabpre[x][y]==0)
           { tabpre[x][y]=1;
             sum1++;
             i++;
             emit imgChanged();
             return image1;
           }

         }
     else{

         if(tabpre[x][y]==0)
                    {tabpre[x][y]=2;
                      sum2++;
                      i++;
                      emit imgChanged();
                      return image2;
                    }
          }



    }
    else{
        if(i%2==0)
          {
            if(!peujouer())
            { if(tabpre[x][y]==1){sum1--;tabpre[x][y]=0;return image;}
               if (tabpre[x][y]==0){return image;}
               if(tabpre[x][y]==2){return image2;}
            }
            else{
                if(tabpre[x][y]==1){return image1;}
                if (tabpre[x][y]==0){i++;emit imgChanged();tabpre[x][y]=1;sum1++;return image1;}
                if(tabpre[x][y]==2){return image2;}

                 }

           }
        else
           {
            if(!peujouer())
            { if(tabpre[x][y]==1){return image1;}
               if (tabpre[x][y]==0){return image;}
               if(tabpre[x][y]==2){sum2--;tabpre[x][y]=0; return image;}
            }
            else{
                if(tabpre[x][y]==1){return image1;}
                if (tabpre[x][y]==0){i++;emit imgChanged();sum2++;tabpre[x][y]=2;return image;}
                if(tabpre[x][y]==2){return image2;}

                 }
           }


        }


    }
void Mpion::testermat()
{  int joueur1gg[3]={1,1,1};
    int diago[3]={3,3,3};
    int diago2[3]={3,3,3};
    int diago3[3]={3,3,3};
    int diago4[3]={3,3,3};
    int diago5[3]={3,3,3};
    int diago6[3]={3,3,3};
    int diago7[3]={3,3,3};
    int diago8[3]={3,3,3};

    for(int jj=0;jj<4;jj++)
      { diago[jj]=tabpre[jj][jj];
        diago2[jj]=tabpre[jj][1];
        diago3[jj]=tabpre[jj][2];
        diago4[jj]=tabpre[jj][3];
        diago5[jj]=tabpre[1][jj];
        diago6[jj]=tabpre[2][jj];
        diago7[jj]=tabpre[3][jj];

        for(int dd=3; dd>=0;dd--)
        {
        diago8[jj]=tabpre[jj][dd];
         }
   };

  if(diago==joueur1gg ||diago2==joueur1gg ||diago3==joueur1gg ||diago4==joueur1gg ||diago5==joueur1gg || diago6==joueur1gg ||diago7==joueur1gg ||diago8==joueur1gg  )
       {
      emit jo1();
        }

}
