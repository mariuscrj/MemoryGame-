object fWarning: TfWarning
  Left = 546
  Top = 330
  BorderStyle = bsNone
  Caption = 'Are you sure?'
  ClientHeight = 120
  ClientWidth = 357
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object btnExit: TButton
    Left = 24
    Top = 32
    Width = 81
    Height = 49
    Caption = 'Yes'
    TabOrder = 0
    OnClick = btnExitClick
  end
  object btnNo: TButton
    Left = 128
    Top = 32
    Width = 81
    Height = 49
    Caption = 'No'
    TabOrder = 1
    OnClick = btnNoClick
  end
  object btnMain: TButton
    Left = 232
    Top = 32
    Width = 81
    Height = 49
    Caption = 'Main Menu'
    TabOrder = 2
    OnClick = btnMainClick
  end
end
