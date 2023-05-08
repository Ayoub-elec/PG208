#ifndef RECTANGLES_H_
#define RECTANGLES_H_

#include <string>
#include "../Image/CImage.h"
#include "rectangle.h"

using namespace std;

class rectangleS: public rectangle{
 public:
    rectangleS();
    rectangleS(istringstream* iss, string mot);
    rectangleS(int _transparence,int _R,int _G, int _B,int _x,int _y, int _longueur,int _hauteur);
    ~rectangleS();
    virtual void dessiner(CImage* img);
};
#endif /*RECTANGLES_H_*/
