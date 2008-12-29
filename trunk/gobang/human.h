#include "ai.h"
#include "gobang.h"
#ifndef HUMAN_H
#define HUMAN_H
class human:public AI
{
 public:
	human(struct tBoard **board,int playerId) : AI(_board,_playerId)
	{
	}
};
#endif
 