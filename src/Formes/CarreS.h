#ifndef CARRES_H_
#define CARRES_H_

#include <string>
#include "../Image/CImage.h"
#include "rectangleS.h"

using namespace std;

class carreS: public rectangleS{
 public:
    carreS();
    carreS(istringstream* iss, string mot);
    carreS(int _transparence,int _R,int _G, int _B,int _x,int _y, int _longueur);
    ~carreS();
};
#endif /*CARRES_H_*/
