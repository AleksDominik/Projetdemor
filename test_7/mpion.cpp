#include "mpion.h"

Mpion::Mpion(QObject *parent) : QObject(parent) {
    image1="p1.jpg";
    image2="p2.jpg";
    i=0;
    //j=0;
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
             return image1;
           }

         }
     else{

         if(tabpre[x][y]==0)
                    {tabpre[x][y]=2;
                      sum2++;
                      i++;
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
                if (tabpre[x][y]==0){i++;tabpre[x][y]=1;sum1++;return image1;}
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
                if (tabpre[x][y]==0){i++;sum2++;tabpre[x][y]=2;return image;}
                if(tabpre[x][y]==2){return image2;}

                 }
           }


        }


    }


/*void Mpion:: remplitlamat(int a, int b)
{
    if(i%2==0){
        if(peujouer()){
            tabpre[a][b]=1;
            }
        else{
            tab[a][b]=0;
        }


    }
    else{
        if(peujouer()){
            tabpre[a][b]=2;
            }
        else{
            tab[a][b]=0;
        }
    }
    matricechanger();


}*/
