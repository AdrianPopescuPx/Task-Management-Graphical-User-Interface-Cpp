//---------------------------------------------------------------------------

#ifndef AppH
#define AppH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.ListBox.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TTitle : public TForm
{
__published:	// IDE-managed Components
	TEdit *InputText;
	TButton *AddTaskBtn;
	TListBox *TaskList;
	TLabel *Title;
	void __fastcall AddTaskBtnClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TTitle(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TTitle *Title;
//---------------------------------------------------------------------------
#endif
