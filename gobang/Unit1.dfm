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
  object RadioGroup1: TRadioGroup
    Left = 736
    Top = 32
    Width = 185
    Height = 105
    Caption = 'Player1:'
    TabOrder = 0
  end
  object RadioGroup2: TRadioGroup
    Left = 976
    Top = 32
    Width = 185
    Height = 105
    Caption = 'Player2:'
    TabOrder = 1
  end
end
