#include "Player.h"
#include <ExtCtrls.hpp>
Player::Player(){
score=0;
}
Player::~Player(){
score=0;
}
int Player::GetScore()
{
return score;
}
void Player::Inc()
{
score++;
}
 