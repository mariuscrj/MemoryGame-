#include "Photo.h"
#include <ExtCtrls.hpp>
Photo::Photo() : Position()
{
   Image = new TImage(NULL);
   VectorPozitie=0;
}


Photo::Photo(int x,int y,TImage* Image,int vector):Position(x,y)
{
  VectorPozitie=vector;
}


Photo::~Photo()
{
VectorPozitie=-1;
delete Image;
}


void Photo::SetVectorPozitie(int k)
{
 VectorPozitie=k;
}


int Photo::GetVectorPozitie()
{
return VectorPozitie;
}


void Photo::SetImage(int x, int y, TImage* Image)
{
        SetPosition(x,y,Image);
        Image->Center = true;
        Image->Proportional = true;
        Image->Stretch= true;
        Image->Visible = true;
        Image->Width = 84;
        Image->Height = 125;
}
