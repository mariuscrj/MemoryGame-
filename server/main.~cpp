//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit4.h"
#include "main.h"
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



void __fastcall TfMain::ServerSocketClientConnect(TObject *Sender,
      TCustomWinSocket *Socket)
{
ServerSocket->Socket->Connections[0]->SendText("Connected");
}
//---------------------------------------------------------------------------


void __fastcall TfMain::btnMulClick(TObject *Sender)
{
if(!ServerSocket->Socket->ActiveConnections)
    ShowMessage("Trebuie sa astepti conectarea unui alt jucator.");
    else
    {
     fMain->Hide();
     fMulServ->Show();
     fMemory->btnPlay->Click();
     }

}
//---------------------------------------------------------------------------

