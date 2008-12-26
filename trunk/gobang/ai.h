#include "gobang.h"
#ifndef AI_H
#define AI_H
class AI
{
 public:
        AI(struct tBoard **board,int playerId);
        virtual void think();
        bool push(int x, int y);
        tStatus check(int x,int y);
 private:
        struct tBoard **_board;
        int _playerId;
        int _phase;
};
#endif