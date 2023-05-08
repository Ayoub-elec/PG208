#include "CercleS.h"
#include <cmath>

cercleS::cercleS()
{
	cout<<"dessin d'un disque"<<endl;
}


cercleS::cercleS(int _transparence,int _R,int _G, int _B,int _rayon,int _x_centre,int _y_centre):cercle(_transparence,_R,_G, _B,_rayon,_x_centre,_y_centre)
{
	cout<<"dessin d'un disque"<<endl;
}

cercleS::cercleS(istringstream* iss, string mot): cercle(iss,mot)
{
    cout<<"dessin d'un disque"<<endl;
}

cercleS::~cercleS()
{
	cout<<"Destruction du disque"<<endl;
}

void cercleS::dessiner(CImage* img)
{
 	int c=0;
	int b=0;
	for (float k=0.0;k<1000;k=k+0.5)
	{
        for (float s=0.0;s<1000;s=s+0.5)
        {
            float a=0;
            a=(k-getx_centre());
            a=a*a;
            float e=0;
            e=(s-gety_centre());
            e=e*e;
            float d=0;
            d=a+e;
            if((round(k)!=c)|| (round(s)!=b))
            {

                if(d<getrayon()*getrayon())
                {
                    applytransparence(img,round(k),round(s));
                }
            }
            c=  round(k);
            b= round(s);

	    }
    }
}
