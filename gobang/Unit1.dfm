object Form1: TForm1
  Left = 192
  Top = 114
  Width = 1301
  Height = 759
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object chessBoard: TImage
    Left = 0
    Top = 0
    Width = 720
    Height = 720
    OnMouseDown = chessBoardMouseDown
  end
end
