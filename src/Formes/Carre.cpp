#include "Carre.h"
#include <cmath>


carre::carre(istringstream* iss, string mot):rectangle(iss,mot)
{
	cout<<"dessin d'un carre"<<endl;
}

carre::carre()
{
	cout<<"dessin d'un carre"<<endl;
}


carre:: carre(int _transparence,int _R,int _G, int _B,int _x,int _y, int _longueur):rectangle(_transparence,_R,_G, _B,_x,_y, _longueur, _longueur)
{
	cout<<"dessin d'un carre"<<endl;
}


carre::~carre()
{
	cout<<"Destruction d'un carre'"<<endl;
}
