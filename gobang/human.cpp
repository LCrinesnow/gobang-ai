#include "human.h"
human::human(struct tBoard **board,int playerId)
{
 _board=board;
 _playerId=playerId;
 _phase=playerId;
}
