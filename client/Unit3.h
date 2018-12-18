//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TfWon : public TForm
{
__published:	// IDE-managed Components
        TButton *btnWon;
        TImage *Image1;
        void __fastcall btnWonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TfWon(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfWon *fWon;
//---------------------------------------------------------------------------
#endif
