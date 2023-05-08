#include "Point.h"
#include <cmath>
point::point()
{
	cout<<"dessin d'un point 0"<<endl;
	setrayon(0);
}

point::point(istringstream* iss, string mot)
{
    cout<<"dessin d'un point 2"<<endl;
    std::getline( (*iss),mot,',');
    setx_centre(atoi(mot.c_str()));

    std::getline( (*iss),mot,',');
    sety_centre(atoi(mot.c_str()));

    std::getline( (*iss),mot,',');
    setR(atoi(mot.c_str()));

	std::getline( (*iss),mot,',');
	setG(atoi(mot.c_str()));

	std::getline( (*iss),mot,',');
	setB(atoi(mot.c_str()));

	std::getline( (*iss),mot,';');
	settransparence(atoi(mot.c_str()));
}

point::point(int _transparence,int _R,int _G, int _B,int _x_centre,int _y_centre):cercle(_transparence,_R,_G, _B,0,_x_centre,_y_centre)
{
	cout<<"dessin d'un point 1"<<endl;
}


point::~point()
{
	cout<<"Destruction du point"<<endl;
}
