object MainForm: TMainForm
  Left = 0
  Top = 0
  Caption = 'MainForm'
  ClientHeight = 295
  ClientWidth = 373
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Edit1: TEdit
    Left = 16
    Top = 36
    Width = 145
    Height = 21
    TabOrder = 0
    Text = 'Edit1'
  end
  object ListBox1: TListBox
    Left = 16
    Top = 63
    Width = 205
    Height = 182
    ItemHeight = 13
    TabOrder = 1
  end
  object Button1: TButton
    Left = 268
    Top = 32
    Width = 83
    Height = 29
    Caption = 'Button1'
    TabOrder = 2
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 268
    Top = 80
    Width = 83
    Height = 29
    Caption = 'Button2'
    TabOrder = 3
    OnClick = Button2Click
  end
end
