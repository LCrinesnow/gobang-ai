//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
#define   ROUND(X)     (int)(X+0.5)
bool flag=0;
bool board[18][18];
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
 int i,j;
 for(i=1;i<=19;++i)
 {
  chessBoard->Canvas->MoveTo(40,i*40);
  chessBoard->Canvas->LineTo(680,i*40);
  chessBoard->Canvas->MoveTo(i*40,40);
  chessBoard->Canvas->LineTo(i*40,680);
 }
 for(i=0;i<18;i++)
 {
  for(j=0;j<18;j++)
  {
   board[i][j]=0;
  }
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::chessBoardMouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
 float x1,y1;
 int x,y;

 x1=((float)X/40);
 y1=((float)Y/40);
 x=ROUND(x1);
 y=ROUND(y1);
 if(board[x][y]==false && x>0 && x<18 && y>0 && y<18)
 {
  
  board[x][y]=true;
  if(flag==1)
  {
   chessBoard->Canvas->Brush->Color=clBlack;
   flag=0;
  }
  else
  {
   chessBoard->Canvas->Brush->Color=clWhite;
   flag=1;
  }
  chessBoard->Canvas->Ellipse(ROUND(x1)*40+20,ROUND(y1)*40+20,ROUND(x1)*40-20,ROUND(y1)*40-20);
 }
}
//---------------------------------------------------------------------------
