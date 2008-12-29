#include "gobang.h"
#ifndef AI_H
#define AI_H
class AI
{
 public:
	    //AI(){}
        AI(struct tBoard **board,int playerId);
        void think();
        bool push(int x, int y);
        tStatus check(int x,int y);
// protected:
        struct tBoard **_board;
        int _playerId;
        int _phase;
};
#endif