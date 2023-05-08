#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <typeinfo>
#include <cmath>
#include "./Formes/CercleS.h"
#include "./Formes/Point.h"
#include "./Formes/Ligne.h"
#include "./Formes/Carre.h"
#include "./Formes/CarreS.h"
using namespace std;

#include "./Format/CBitmap.h"


int main(int argc, char * argv[]) {
    cout << "(II) P_Bitmap exection start (" << __DATE__ << " - " << __TIME__ << ")" << endl;
    cout << "(II) + Number of arguments = " << argc << endl;

    cout << "(II) CBitmap object creation" << endl;
    CBitmap *image = new CBitmap();
    string filename2 = argv[2];

    cout << "(II) CImage pointer extraction" << endl;
    CImage   *img = new CImage(1000, 1000);
    for (int i=0;i<1000;i++){
        for(int j=0;j<1000;j++){
            CPixel *a=img->getPixel(i,j);
		    a->RGB(255,255,255);
        }
    }
       std::ifstream infile;
       string STRING;
       infile.open(argv[1]);
       while(!infile.eof())
       {
            getline(infile,STRING);
            istringstream iss(STRING);
            string mot;
            std::getline(iss,mot,'[');
            std::getline(iss,mot,':');

          	cout << "=> " << STRING << " <= " << endl;

          if(mot.compare("POINT")==1)
            {
              point *p= new point( &iss, mot);
              p->dessiner(img);
              delete p;
            }
          if(mot.compare("ARC_DE_CERCLE")==1)
            {
              arc_de_cercle *p= new arc_de_cercle( &iss, mot);
              p->dessiner(img);
              delete p;
            }
          if(mot.compare("CARRE")==1)
            {
              carre *p= new carre( &iss, mot);
              p->dessiner(img);
              delete p;
            }
          if(mot.compare("RECTANGLE")==1)
            {
              rectangle *p= new rectangle( &iss, mot);
              p->dessiner(img);
              delete p;
            }
          if(mot.compare("RECTANGLES")==1)
            {
              rectangleS *p= new rectangleS( &iss, mot);
              p->dessiner(img);
              delete p;
            }
          if(mot.compare("CARRES")==1)
            {
              carreS *p= new carreS( &iss, mot);
              p->dessiner(img);
              delete p;
            }
          if(mot.compare("CERCLE")==1)
            {
              cercle *p= new cercle( &iss, mot);
              p->dessiner(img);
              delete p;
            }
          if(mot.compare("CERCLES")==1)
            {
              cercleS *p= new cercleS( &iss, mot);
              p->dessiner(img);
              delete p;
            }
          if(mot.compare("LIGNE")==1)
            {
              ligne *p= new ligne( &iss, mot);
              p->dessiner(img);
              delete p;
            }
       }
    CImage   *img2 = new CImage(1000*atoi(argv[3]), 1000*atoi(argv[3]));
    for (int i=0;i<1000*atoi(argv[3]);i++){
        for(int j=0;j<1000*atoi(argv[3]);j++){
            int x1=floor((float)i/atof(argv[3]));
            int x2=ceil((float)i/atof(argv[3]));
            int y1=floor((float)j/atof(argv[3]));
            int y2=ceil((float)j/atof(argv[3]));
            float diff1= i-x1;
            float diff2= j-y1;
            if (x2>999)
            {
                x2=999;
            }
            if (y2>999)
            {
                y2=999;
            }
            CPixel *a=img->getPixel(x1,y1);
            int Ra;
            int Ba;
            int Ga;
            Ra=a->Red();
            Ba=a->Blue();
            Ga=a->Green();
            CPixel *b=img->getPixel(x2,y1);
            int Rb;
            int Bb;
            int Gb;
            Rb=b->Red();
            Bb=b->Blue();
            Gb=b->Green();
            CPixel *c=img->getPixel(x1,y2);
            int Rc;
            int Bc;
            int Gc;
            Rc=c->Red();
            Bc=c->Blue();
            Gc=c->Green();
            CPixel *d=img->getPixel(x2,y2);
            int Rd;
            int Bd;
            int Gd;
            Rd=d->Red();
            Bd=d->Blue();
            Gd=d->Green();
            float Rf=diff2*(1-diff1)*Rb+diff2*diff1*Rd+(1-diff2)*(1-diff1)*Ra+diff1*(1-diff2)*Rc;
            float Bf=diff2*(1-diff1)*Bb+diff2*diff1*Bd+(1-diff2)*(1-diff1)*Ba+diff1*(1-diff2)*Bc;
            float Gf=diff2*(1-diff1)*Gb+diff2*diff1*Gd+(1-diff2)*(1-diff1)*Ga+diff1*(1-diff2)*Gc;
            CPixel *n=img2->getPixel(i,j);
		    n->RGB((int)Rf,(int)Gf,(int)Bf);
        }
    }
    image->setImage( img2 );
    cout << "(II) CBitmap image saving" << endl;
    image->SaveBMP(filename2);
    return 1;
}

