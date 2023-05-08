#include "CarreS.h"
#include <cmath>

carreS::carreS()
{
	cout<<"dessin d'un carreS"<<endl;
}

carreS::carreS(istringstream* iss, string mot):rectangleS(iss,mot)
{
	cout<<"dessin d'un carreS"<<endl;
}

carreS:: carreS(int _transparence,int _R,int _G, int _B,int _x,int _y, int _longueur):rectangleS(_transparence,_R,_G, _B,_x,_y, _longueur, _longueur)
{
	cout<<"dessin d'un carreS"<<endl;
}


carreS::~carreS()
{
	cout<<"Destruction d'un carreS'"<<endl;
}
