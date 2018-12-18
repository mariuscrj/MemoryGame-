//---------------------------------------------------------------------------
#include<ExtCtrls.hpp>
#include "clase.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)
Position::Position()
{
        Left = 0;
        Top = 0;
}
Position::Position(int x, int y)
{
        Left = x;
        Top  = y;
}
Position::~Position()
{
        Left = 0;
        Top = 0;
}
void Position::SetPosition(int x, int y, TImage* Image)
 {
        Image->Left = x;
        Image->Top = y;
 }

