#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include <string>
#include "../Image/CImage.h"
#include "Forme.h"
#include "Ligne.h"

using namespace std;

class rectangle: public Forme{
 private:
    int hauteur;
    int longueur;
    int x;
    int y;
 public:
    rectangle();
    rectangle(istringstream* iss, string mot);
    rectangle(int _transparence,int _R,int _G, int _B,int _x,int _y, int _longueur,int _hauteur);
    ~rectangle();
    void setx(int _x);
    int getx();
    void sety(int _y);
    int gety();
    void sethauteur(int _hauteur);
    int gethauteur();
    void setlongueur(int _longueur);
    int getlongueur();
    virtual void dessiner(CImage* img);
};
#endif /*RECTANGLE_H_*/
