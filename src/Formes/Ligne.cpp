#include "Ligne.h"
#include <cmath>
#include <algorithm>

ligne::ligne()
{
	cout << " + dessin d'une ligne 1" << endl;
}

ligne::ligne(int _transparence,int _R,int _G, int _B,int _x1,int _y1,int _x2,int _y2):Forme(_transparence,_R,_G,_B)
{
	cout << " + dessin d'une ligne 2" << endl;
	x1=_x1;
    y1=_y1;
    x2=_x2;
	y2=_y2;
}

ligne::ligne(istringstream* iss, string mot)
{
	cout << " + dessin d'une ligne 3" << endl;
    std::getline( (*iss),mot,',');
    set_x1(atoi(mot.c_str()));

    std::getline( (*iss),mot,',');
    set_y1(atoi(mot.c_str()));

	std::getline( (*iss),mot,',');
    set_x2(atoi(mot.c_str()));

    std::getline( (*iss),mot,',');
    set_y2(atoi(mot.c_str()));


    std::getline( (*iss),mot,',');
    setR(atoi(mot.c_str()));

	std::getline( (*iss),mot,',');
	setG(atoi(mot.c_str()));

	std::getline( (*iss),mot,',');
	setB(atoi(mot.c_str()));

	std::getline( (*iss),mot,';');
	settransparence(atoi(mot.c_str()));
}


ligne::~ligne()
{
	cout<<"Destruction de la ligne "<<endl;
}


void ligne::set_x1(int _x1)
{
	x1=_x1;
}


int ligne::get_x1()
 {
	return x1;
 }



 void ligne::set_y1(int _y1)
{
	y1=_y1;
}


int ligne::get_y1()
 {
	return y1;
 }


 void ligne::set_x2(int _x2)
{
	x2=_x2;
}


int ligne::get_x2()
 {
	return x2;
 }



 void ligne::set_y2(int _y2)
{
	y2=_y2;
}


int ligne::get_y2()
{
	return y2;
}


 void ligne::dessiner(CImage* img)
{
	if(x1==x2)
	{

		for (int i=min(y1,y2);i<=max(y1,y2);i=i+1)
		{
			applytransparence(img,x1,i);
		}
	 cout << "11111111111"<< endl;
	}
	else
	{

		float k;
		k=float(y2-y1)/float(x2-x1);
		float s;
		s=float(y1-k*x1);
		for (int i=min(x1,x2);i<=max(x1,x2);i=i+1)
		{
			float b= k*float(i)+s;
			applytransparence(img,i,round(b));

		}
			 cout << "222222"<< endl;
	}
}
