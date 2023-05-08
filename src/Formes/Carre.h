#ifndef CARRE_H_
#define CARRE_H_

#include <string>
#include "../Image/CImage.h"
#include "rectangle.h"

using namespace std;

class carre: public rectangle{
 public:
    carre();
    carre(istringstream* iss, string mot);
    carre(int _transparence,int _R,int _G, int _B,int _x,int _y, int _longueur);
    ~carre();
};
#endif /*CARRE_H_*/
