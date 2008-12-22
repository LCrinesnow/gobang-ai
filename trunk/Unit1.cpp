//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
#define   ROUND (X)     (int)(X+0.5)
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
 int i,j;
 for(i=1;i<=17;++i)
 {
  chessBoard->Canvas->MoveTo(40,i*40);
  chessBoard->Canvas->LineTo(640,i*40);
  chessBoard->Canvas->MoveTo(i*40,40);
  chessBoard->Canvas->LineTo(i*40,640);
 }
 chessBoard->Canvas->Brush->Color=clBlack;
 chessBoard->Canvas->Ellipse(20,20,60,60);
}
//---------------------------------------------------------------------------

