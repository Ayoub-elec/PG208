#ifndef LIGNE_H_
#define LIGNE_H_

#include <string>
#include "../Image/CImage.h"
#include "Forme.h"

using namespace std;

class ligne: public Forme{
 private:
    int x1;
    int y1;
    int x2;
    int y2;
 public:
    ligne();
    ligne(istringstream* iss, string mot);
    ligne(int _transparence,int _R,int _G, int _B,int _x1,int _y1,int _x2,int _y2);
    ~ligne();
    void set_x1(int _x1);
    int get_x1();
    void set_y1(int _y1);
    int get_y1();
    void set_x2(int _x2);
    int get_x2();
    void set_y2(int _y2);
    int get_y2();
    virtual void dessiner(CImage* img);
};
#endif /*LIGNE_H_*/
