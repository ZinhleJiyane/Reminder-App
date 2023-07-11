object Form3: TForm3
  Left = 0
  Top = 0
  Caption = 'Form3'
  ClientHeight = 442
  ClientWidth = 628
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object ReminderDate: TDateTimePicker
    Left = 32
    Top = 16
    Width = 241
    Height = 49
    Date = 45117.000000000000000000
    Time = 0.914770462964952500
    TabOrder = 0
  end
  object ReminderTime: TTimePicker
    Left = 32
    Top = 88
    Width = 241
    Height = 49
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Segoe UI'
    Font.Style = []
    TabOrder = 1
    Time = 45117.915110613420000000
    TimeFormat = 'hh:nn'
  end
  object TxtMessage: TEdit
    Left = 32
    Top = 168
    Width = 241
    Height = 41
    TabOrder = 2
  end
  object BtnSetR: TButton
    Left = 32
    Top = 232
    Width = 241
    Height = 41
    Caption = 'Set Reminder'
    TabOrder = 3
    OnClick = BtnSetRClick
  end
  object ReminderTimer: TTimer
    OnTimer = ReminderTimerTimer
    Left = 144
    Top = 296
  end
end
