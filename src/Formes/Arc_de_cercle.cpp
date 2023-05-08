#include "Arc_de_cercle.h"
#include <cmath>
arc_de_cercle::arc_de_cercle(istringstream* iss, string mot)
{
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

	std::getline( (*iss),mot,',');
	settransparence(atoi(mot.c_str()));

	std::getline( (*iss),mot,',');
	setangle_depart(atof(mot.c_str()));

	std::getline( (*iss),mot,';');
	setangle_fin(atof(mot.c_str()));

}
arc_de_cercle::arc_de_cercle()
{
	cout<<"dessin d'un arc de cercle 0"<<endl;
}
arc_de_cercle::arc_de_cercle(int _transparence,int _R,int _G, int _B,float _angle_depart,float _angle_fin,int _rayon,int _x_centre,int _y_centre):Forme(_transparence,_R,_G,_B)
{
	cout<<"dessin d'un arc de cercle 1"<<endl;
	angle_depart=_angle_depart;
    angle_fin=_angle_fin;
	rayon=_rayon;
	x_centre=_x_centre;
	y_centre=_y_centre;
}

arc_de_cercle::~arc_de_cercle()
{
	cout<<"Destruction de l'arc de cercle"<<endl;
}

void arc_de_cercle::setangle_fin(float _angle_fin)
{
	angle_fin=_angle_fin;
}

float arc_de_cercle::getangle_fin()
 {
	return angle_fin;
 }

 void arc_de_cercle::setangle_depart(float _angle_depart)
{
	angle_depart=_angle_depart;
}

float arc_de_cercle::getangle_depart()
 {
	return angle_depart;
 }
void arc_de_cercle::setrayon(int _rayon)
 {
	rayon=_rayon;
 }

int arc_de_cercle::getrayon()
 {
	return rayon;
 }

void arc_de_cercle::setx_centre(int _x_centre)
{
	x_centre=_x_centre;
}

int  arc_de_cercle::getx_centre()
{
	return x_centre;
}

void arc_de_cercle::sety_centre(int _y_centre)
{
	y_centre=_y_centre;
}

int  arc_de_cercle::gety_centre()
{
	return y_centre;
}
void arc_de_cercle::dessiner(CImage* img)
{
	int c=0;
	int b=0;
	for (float i=angle_depart;i<angle_fin;i=i+0.01)
	{

		float k;
		k=getx_centre()+getrayon()*cos(i);
		float s;
		s=gety_centre()+getrayon()*sin(i);
		if((round(k)!=c)|| (round(s)!=b))
		{
		 applytransparence(img,round(k),round(s));
		}
		c=  round(k);
		b= round(s);
	}
}
