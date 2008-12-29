#include "ai.h"
AI::AI(struct tBoard **board,int playerId)
{
 _board=board;
 _playerId=playerId;
 _phase=playerId;
}

tStatus AI::check(int x,int y)
{
int tempx,tempy;
 int count=0;
 tempx=x;
 tempy=y;
 //往上找
 while(_board[tempx][tempy].value==_playerId)
 {
  ++count;
  --tempy;
  if(tempy<0)
   break;
 }
 //往下找
 tempy=y;
 while(_board[tempx][tempy].value==_playerId)
 {
  ++count;
  ++tempy;
  if(tempy>17)
   break;
 }
 if(count>=6)//進入點算二次，所以要多1或把次數減1
  return win;

 tempx=x;
 tempy=y;
 count=0;
  //往左找
 while(_board[tempx][tempy].value==_playerId)
 {
  ++count;
  --tempx;
  if(tempx<0)
   break;
 }
 //往右找
 tempx=x;
 while(_board[tempx][tempy].value==_playerId)
 {
  ++count;
  ++tempx;
  if(tempx>17)
   break;
 }
 if(count>=6)//進入點算二次，所以要多1或把次數減1
  return win;

 tempx=x;
 tempy=y;
 count=0;
   //往左上找
 while(_board[tempx][tempy].value==_playerId)
 {
  ++count;
  --tempx;
  --tempy;
  if(tempx<0 || tempy <0)
   break;
 }
 //往右下找
 tempx=x;
 tempy=y;
 while(_board[tempx][tempy].value==_playerId)
 {
  ++count;
  ++tempx;
  ++tempy;
  if(tempx>17 || tempy>17)
   break;
 }
 if(count>=6)//進入點算二次，所以要多1或把次數減1
  return win;
  
 tempx=x;
 tempy=y;
 count=0;
    //往右上找
 while(_board[tempx][tempy].value==_playerId)
 {
  ++count;
  ++tempx;
  --tempy;
  if(tempx>17 || tempy < 0)
   break;
 }
 //往左下找
 tempx=x;
 tempy=y;
 while(_board[tempx][tempy].value==_playerId)
 {
  ++count;
  --tempx;
  ++tempy;
  if(tempx<0 || tempy>17)
   break;
 }
 if(count>=6)//進入點算二次，所以要多1或把次數減1
  return win;
 return none;
}

bool AI::push(int x,int y)
{
 /*if(_board[x][y].value==0)
 {     */
  _board[x][y].value=_playerId;
  _phase+=2;
  return check(x,y);
  //return true;
 /*}   
 else
  return false;  */
}
