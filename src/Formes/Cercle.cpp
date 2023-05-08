#include "Cercle.h"
#include <cmath>

cercle::cercle()
{
	cout<<"dessin d'un cercle 0"<<endl;
	setangle_depart(0.0);
	setangle_fin(6.28);
}

cercle::cercle(istringstream* iss, string mot)
{
	cout<<"dessin d'un cercle 1"<<endl;
    std::getline( (*iss),mot,',');
    setx_centre(atoi(mot.c_str()));

    std::getline( (*iss),mot,',');
    sety_centre(atoi(mot.c_str()));

	std::getline( (*iss),mot,',');
    setrayon(atoi(mot.c_str()));

    std::getline( (*iss),mot,',');
    setR(atoi(mot.c_str()));

	std::getline( (*iss),mot,',');
	setG(atoi(mot.c_str()));

	std::getline( (*iss),mot,',');
	setB(atoi(mot.c_str()));

	std::getline( (*iss),mot,';');
	settransparence(atoi(mot.c_str()));
	setangle_depart(0.0);
	setangle_fin(6.28);
}
cercle::cercle(int _transparence,int _R,int _G, int _B,int _rayon,int _x_centre,int _y_centre):arc_de_cercle(_transparence,_R,_G, _B,0.0,6.28,_rayon,_x_centre,_y_centre)
{
	cout<<"dessin d'un cercle 1"<<endl;
}


cercle::~cercle()
{
	cout<<"Destruction du cercle"<<endl;
}
