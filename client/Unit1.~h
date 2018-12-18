#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------


#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <Graphics.hpp>
#include "Player.h"
#include "clase.h"
#include "Photo.h"
//---------------------------------------------------------------------------
class TfMemory : public TForm
{
__published:	// IDE-managed Components
        TButton *btnPlay;
        TButton *btnExit;
        TImage *Image1;
        void __fastcall btnExitClick(TObject *Sender);
        void __fastcall btnPlayClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        Player *player1;
        int maxclick,pozitie[2];
        Photo *firstcard[32],*secondcard[32];
        __fastcall TfMemory(TComponent* Owner);
       void __fastcall TfMemory::FlipCard(TObject *Sender);
};
//---------------------------------------------------------------------------
extern PACKAGE TfMemory *fMemory;
//---------------------------------------------------------------------------
#endif
