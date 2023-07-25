//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "App.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TTitle *Title;
//---------------------------------------------------------------------------
__fastcall TTitle::TTitle(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TTitle::AddTaskBtnClick(TObject *Sender)
{
	String taskText = InputText->Text;
	if (!taskText.IsEmpty()) {
		InputText->Text = "";
		TaskList->Items->Add(taskText);
	}

}
//---------------------------------------------------------------------------
