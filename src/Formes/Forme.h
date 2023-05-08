#ifndef FORME_H_
#define FORME_H_

#include "../Image/CImage.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Forme{
private:
    int transparence;
	int R;
	int G;
	int B;

public:
	Forme();

	Forme(int _transparence,int R,int G,int B);

	~Forme();

	int gettransparence();

	void settransparence(int _transparence);

	void applytransparence(CImage* img, int x, int y);

	int getR();

	void setR(int _R);

	int getG();

	void setG(int _G);

	int getB();

	void setB(int _B);

    virtual void dessiner(CImage* img)=0;
    };

#endif /*FORME_H_*/
