#include "Forme.h"

Forme::Forme()
{
    cout<<"construction d'une forme 0"<<endl;
}
Forme::Forme(int _transparence, int _R, int _G, int _B)
{
    cout<<"construction d'une forme 1"<<endl;
    transparence=_transparence;
    R=_R;
    G=_G;
    B=_B;
}

Forme::~Forme()
{
    cout<<"Destruction de la forme"<<endl;
}

int Forme::gettransparence()
{
    return transparence;
}

void Forme::settransparence(int _transparence)
{
    transparence=_transparence;
}
void Forme::applytransparence(CImage* img, int x, int y)
{
    CPixel *a=img->getPixel(x,y);
    int rouge;
    int vert;
    int bleu;
    rouge=a->Red();
    bleu=a->Blue();
    vert=a->Green();
    rouge=((100-gettransparence())*rouge+gettransparence()*getR())/100;
    bleu=((100-gettransparence())*bleu+gettransparence()*getB())/100;
    vert=((100-gettransparence())*vert+gettransparence()*getG())/100;
    a->RGB(rouge,vert,bleu);

}

int Forme::getR()
{
    return R;
}

void Forme::setR(int _R)
{
    R=_R;
}

int Forme::getG()
{
    return G;
}

void Forme::setG(int _G)
{
    G=_G;
}

int Forme::getB()
{
    return B;
}

void Forme::setB(int _B)
{
    B=_B;
}
