#include "rectangle.h"
#include <cmath>

rectangle::rectangle()
{
	cout<<"dessin d'un rectangle"<<endl;
}
rectangle::rectangle(istringstream* iss, string mot)
{
                cout<<"dessin d'un rectangle"<<endl;
                std::getline( (*iss),mot,',');
                setx(atoi(mot.c_str()));

                std::getline( (*iss),mot,',');
                sety(atoi(mot.c_str()));

                std::getline( (*iss),mot,',');
                setlongueur(atoi(mot.c_str()));

                std::getline( (*iss),mot,',');
                sethauteur(atoi(mot.c_str()));

                std::getline( (*iss),mot,',');
                setR(atoi(mot.c_str()));

                std::getline( (*iss),mot,',');
                setG(atoi(mot.c_str()));

                std::getline( (*iss),mot,',');
                setB(atoi(mot.c_str()));

                std::getline( (*iss),mot,';');
                settransparence(atoi(mot.c_str()));

}
rectangle::rectangle(int _transparence,int _R,int _G, int _B,int _x,int _y, int _longueur,int _hauteur):Forme(_transparence,_R,_G,_B)
{
	cout<<"dessin d'un rectangle"<<endl;
	x=_x;
	y=_y;
	longueur=_longueur;
	hauteur=_hauteur;
}

rectangle::~rectangle()
{
	cout<<"Destruction du rectangle"<<endl;
}

void rectangle::setlongueur(int _longueur)
{
	longueur=_longueur;
}

int rectangle::getlongueur()
 {
	return longueur;
 }


void rectangle::sethauteur(int _hauteur)
 {
	hauteur=_hauteur;
 }

int rectangle::gethauteur()
 {
	return hauteur;
 }

void rectangle::setx(int _x)
{
	x=_x;
}

int  rectangle::getx()
{
	return x;
}

void rectangle::sety(int _y)
{
	y=_y;
}

int  rectangle::gety()
{
	return y;
}
void rectangle::dessiner(CImage* img)
{
	ligne *l1= new ligne(gettransparence(),getR(),getG(),getB(),getx(),gety(),getx()+getlongueur(),gety());
    ligne *l2= new ligne(gettransparence(),getR(),getG(),getB(),getx(),gety()+1,getx(),gety()+gethauteur());
    ligne *l3= new ligne(gettransparence(),getR(),getG(),getB(),getx()+1,gety()+gethauteur(),getx()+getlongueur(),gety()+gethauteur());
    ligne *l4= new ligne(gettransparence(),getR(),getG(),getB(),getx()+getlongueur(),gety()+gethauteur()-1,getx()+getlongueur(),gety()+1);
    l1->dessiner(img);
    l2->dessiner(img);
    l3->dessiner(img);
    l4->dessiner(img);
    delete l1;
    delete l2;
    delete l3;
    delete l4;

}
