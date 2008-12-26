#include "ai.h"
#include "gobang.h"
#ifndef HUMAN_H
#define HUMAN_H
class human:public AI
{
 human(struct tBoard **board,int playerId);
};
#endif
 