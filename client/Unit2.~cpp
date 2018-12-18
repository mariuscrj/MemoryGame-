//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "main.h"
#include "Unit2.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfWarning *fWarning;
//---------------------------------------------------------------------------
__fastcall TfWarning::TfWarning(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfWarning::btnExitClick(TObject *Sender)
{
exit(0);        
}
//---------------------------------------------------------------------------
void __fastcall TfWarning::btnNoClick(TObject *Sender)
{
fWarning->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TfWarning::btnMainClick(TObject *Sender)
{
fWarning->Hide();
fMemory->Hide();
fMain->Show();
}
//---------------------------------------------------------------------------

