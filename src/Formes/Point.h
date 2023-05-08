#ifndef POINT_H_
#define POINT_H_

#include "Cercle.h"

class point: public cercle{
public:

    point();
    point(istringstream* iss, string mot);
    point(int _transparence,int _R,int _G, int _B,int _x_centre,int _y_centre);

    ~point();
};
#endif /*POINT_H_*/
