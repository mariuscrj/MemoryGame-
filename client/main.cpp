//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "main.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfMain *fMain;
//---------------------------------------------------------------------------
__fastcall TfMain::TfMain(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TfMain::btnExitClick(TObject *Sender)
{
exit(0);
}
//---------------------------------------------------------------------------

void __fastcall TfMain::btnPlayClick(TObject *Sender)
{
fMain->Hide();
fMemory->Show();
fMemory->btnPlay->Click();
}

void __fastcall TfMain::btnMulClick(TObject *Sender)
{
AnsiString IP;
InputQuery("", "Introdu adresa IP:", IP);
if(IP.Trim() != ""){
        ClientSocket->Active=false;
        ClientSocket->Address=IP;
        ClientSocket->Active=true;
        fMain->Hide();
        fMulClient->Show();
        ClientSocket->Socket->SendText("Conectare");
        }
else {
        ShowMessage("No IP adress was introduced.");
        }
}
//---------------------------------------------------------------------------

