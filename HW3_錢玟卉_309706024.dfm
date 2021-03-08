object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Magic Square by Chien wen hui  on 2020/10/17 ver1.0'
  ClientHeight = 386
  ClientWidth = 661
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Splitter1: TSplitter
    Left = 177
    Top = 0
    Height = 386
    ExplicitLeft = 312
    ExplicitTop = 240
    ExplicitHeight = 100
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 177
    Height = 386
    Align = alLeft
    TabOrder = 0
    object Label1: TLabel
      Left = 56
      Top = 32
      Width = 63
      Height = 13
      Caption = 'Square Size :'
    end
    object Label2: TLabel
      Left = 48
      Top = 91
      Width = 97
      Height = 25
      Caption = '5 <= size <= 21'
    end
    object Button1: TButton
      Left = 48
      Top = 122
      Width = 75
      Height = 25
      Caption = 'magic square'
      TabOrder = 0
      OnClick = Button1Click
    end
    object Edit1: TEdit
      Left = 24
      Top = 64
      Width = 121
      Height = 21
      TabOrder = 1
      Text = '5'
    end
    object GroupBox1: TGroupBox
      Left = 13
      Top = 282
      Width = 150
      Height = 84
      Caption = 'Start Position :'
      TabOrder = 2
      object RadioButton5: TRadioButton
        Left = 16
        Top = 24
        Width = 113
        Height = 17
        Caption = 'Medium up'
        TabOrder = 0
      end
      object RadioButton6: TRadioButton
        Left = 16
        Top = 47
        Width = 113
        Height = 17
        Caption = 'Medium bottom'
        TabOrder = 1
      end
    end
    object GroupBox2: TGroupBox
      Left = 13
      Top = 153
      Width = 149
      Height = 112
      Caption = 'Direction Option :'
      TabOrder = 3
      object RadioButton1: TRadioButton
        Left = 18
        Top = 18
        Width = 113
        Height = 17
        Caption = 'left up'
        TabOrder = 0
      end
      object RadioButton2: TRadioButton
        Left = 18
        Top = 41
        Width = 113
        Height = 17
        Caption = 'left bottom'
        TabOrder = 1
      end
      object RadioButton3: TRadioButton
        Left = 18
        Top = 64
        Width = 113
        Height = 17
        Caption = 'right up'
        TabOrder = 2
      end
      object RadioButton4: TRadioButton
        Left = 18
        Top = 87
        Width = 113
        Height = 17
        Caption = 'right bottom'
        TabOrder = 3
      end
    end
  end
  object PageControl1: TPageControl
    Left = 180
    Top = 0
    Width = 481
    Height = 386
    ActivePage = TabSheet2
    Align = alClient
    TabOrder = 1
    object TabSheet1: TTabSheet
      Caption = 'magic square print'
      object Memo1: TMemo
        Left = 0
        Top = 0
        Width = 473
        Height = 358
        Align = alClient
        Lines.Strings = (
          'Memo1')
        ScrollBars = ssVertical
        TabOrder = 0
      end
    end
    object TabSheet2: TTabSheet
      Caption = 'magic square with grid'
      ImageIndex = 1
      object Memo2: TMemo
        Left = 0
        Top = 0
        Width = 473
        Height = 358
        Align = alClient
        Lines.Strings = (
          'Memo2')
        TabOrder = 0
        ExplicitLeft = 180
        ExplicitWidth = 481
        ExplicitHeight = 386
      end
      object StringGrid1: TStringGrid
        Left = 0
        Top = 0
        Width = 473
        Height = 358
        Align = alClient
        TabOrder = 1
        ExplicitLeft = 180
        ExplicitWidth = 481
        ExplicitHeight = 386
      end
    end
  end
end
