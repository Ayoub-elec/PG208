#ifndef CERCLES_H_
#define CERCLES_H_

#include <string>
#include "../Image/CImage.h"
#include "Cercle.h"

using namespace std;

class cercleS: public cercle{
 public:
    cercleS();
    cercleS(istringstream* iss, string mot);
    cercleS(int _transparence,int _R,int _G, int _B,int _rayon,int _x_centre,int _y_centre);
    ~cercleS();
    virtual void dessiner(CImage* img);
};
#endif /*CERCLES_H_*/
