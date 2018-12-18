#include <ExtCtrls.hpp>
#ifndef PositionH
#define PositionH
//---------------------------------------------------------------------------
class Position
{

private:        int Top;
                int Left;

public:         Position();
                Position(int x, int y);
                ~Position();
                void SetPosition(int x, int y, TImage* Image);
};
#endif

