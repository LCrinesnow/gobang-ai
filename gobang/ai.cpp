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
 //���W��
 while(_board[tempx][tempy].value==_playerId)
 {
  ++count;
  --tempy;
  if(tempy<0)
   break;
 }
 //���U��
 tempy=y;
 while(_board[tempx][tempy].value==_playerId)
 {
  ++count;
  ++tempy;
  if(tempy>17)
   break;
 }
 if(count>=6)//�i�J�I��G���A�ҥH�n�h1�Χ⦸�ƴ�1
  return win;

 tempx=x;
 tempy=y;
 count=0;
  //������
 while(_board[tempx][tempy].value==_playerId)
 {
  ++count;
  --tempx;
  if(tempx<0)
   break;
 }
 //���k��
 tempx=x;
 while(_board[tempx][tempy].value==_playerId)
 {
  ++count;
  ++tempx;
  if(tempx>17)
   break;
 }
 if(count>=6)//�i�J�I��G���A�ҥH�n�h1�Χ⦸�ƴ�1
  return win;

 tempx=x;
 tempy=y;
 count=0;
   //�����W��
 while(_board[tempx][tempy].value==_playerId)
 {
  ++count;
  --tempx;
  --tempy;
  if(tempx<0 || tempy <0)
   break;
 }
 //���k�U��
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
 if(count>=6)//�i�J�I��G���A�ҥH�n�h1�Χ⦸�ƴ�1
  return win;
  
 tempx=x;
 tempy=y;
 count=0;
    //���k�W��
 while(_board[tempx][tempy].value==_playerId)
 {
  ++count;
  ++tempx;
  --tempy;
  if(tempx>17 || tempy < 0)
   break;
 }
 //�����U��
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
 if(count>=6)//�i�J�I��G���A�ҥH�n�h1�Χ⦸�ƴ�1
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
