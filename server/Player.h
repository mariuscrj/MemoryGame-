#include <ExtCtrls.hpp>
#ifndef PlayerH
#define PlayerH
class Player{
protected:
int score;
public:
Player();
~Player();
int GetScore();
void Inc();
};
#endif
