#ifndef CERCLE_H_
#define CERCLE_H_

#include "Arc_de_cercle.h"

class cercle: public arc_de_cercle{
 public:
    cercle();
    cercle(istringstream* iss, string mot);
    cercle(int _transparence,int _R,int _G, int _B,int _rayon,int _x_centre,int _y_centre);
    ~cercle();
};
#endif /*CERCLE_H_*/
