//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
	  ReminderTimer->Enabled = false;
}

    const int MillisecondsPerDay = 86400000;
//---------------------------------------------------------------------------
void __fastcall TForm3::BtnSetRClick(TObject *Sender)
{
     TDate reminderDate = ReminderDate->Date;  //Store the user date here
	 TTime reminderTime = ReminderTime->Time;  //Store the user time here

	 TDateTime reminderDateTime =  reminderDate +  reminderTime; //Add the user date and time together

	 TDateTime remainingDateTime =  reminderDateTime - Now();
	 //Finding the difference between the time and date the user has inserted and the current time and date

  //Convert the remainingDateTime into milliseconds cause our timer we want to set works in millisec

	  double remainingtimeInMilliSecs =
				  static_cast<double>(remainingDateTime) *  MillisecondsPerDay;

	   ReminderTimer->Interval = remainingtimeInMilliSecs ;
	   ReminderTimer->Enabled = true; //enable reminder timer
	   ShowMessage("Reminder Set");
}
//---------------------------------------------------------------------------
void __fastcall TForm3::ReminderTimerTimer(TObject *Sender)
{
          ReminderTimer->Enabled = false;  //disable reminder timer
	      ShowMessage(TxtMessage->Text); //show the message the user has entered
}
//---------------------------------------------------------------------------
