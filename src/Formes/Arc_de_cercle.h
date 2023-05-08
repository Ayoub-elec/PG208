#ifndef ARC_DE_CERCLE_H_
#define ARC_DE_CERCLE_H_

#include <string>
#include "../Image/CImage.h"
#include "Forme.h"

using namespace std;

class arc_de_cercle: public Forme{
 private:
    float angle_depart;
    float angle_fin;
    int rayon;
    int x_centre;
    int y_centre;
 public:
    arc_de_cercle(istringstream* iss, string mot);
    arc_de_cercle();
    arc_de_cercle(int _transparence,int _R,int _G, int _B,float _angle_depart,float _angle_fin,int _rayon,int _x_centre,int _y_centre);
    ~arc_de_cercle();
    void setangle_depart(float _angle_depart);
    float getangle_depart();
    void setangle_fin(float _angle_fin);
    float getangle_fin();
    void setrayon(int _rayon);
    int getrayon();
    void setx_centre(int _x_centre);
    int getx_centre();
    void sety_centre(int _y_centre);
    int gety_centre();
    virtual void dessiner(CImage* img);
};
#endif /*ARC_DE_CERCLE_H_*/
