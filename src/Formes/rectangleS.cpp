#include "rectangleS.h"
#include <cmath>
rectangleS::rectangleS()
{
	cout<<"dessin d'un rectangleS"<<endl;
}
rectangleS::rectangleS(istringstream* iss, string mot):rectangle(iss,mot)
{
    cout<<"dessin d'un rectangleS"<<endl;
}
rectangleS::rectangleS(int _transparence,int _R,int _G, int _B,int _x,int _y, int _longueur,int _hauteur):rectangle(_transparence, _R ,_G, _B,_x,_y, _longueur,_hauteur)
{
	cout<<"dessin d'un rectangleS"<<endl;

}

rectangleS::~rectangleS()
{
	cout<<"Destruction du rectangleS"<<endl;
}
void rectangleS::dessiner(CImage* img)
{
    for (int i=getx();i<=getx()+getlongueur();i=i+1){
        for (int j=gety();j<=gety()+gethauteur();j=j+1)
        {
            applytransparence(img,i,j);
        }
    }
}
