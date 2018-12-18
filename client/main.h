//---------------------------------------------------------------------------

#ifndef mainH
#define mainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include <ScktComp.hpp>
//---------------------------------------------------------------------------
class TfMain : public TForm
{
__published:	// IDE-managed Components
        TButton *btnPlay;
        TButton *btnExit;
        TImage *Image1;
        TButton *btnMul;
        TClientSocket *ClientSocket;
        void __fastcall btnExitClick(TObject *Sender);
        void __fastcall btnPlayClick(TObject *Sender);
        void __fastcall btnMulClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TfMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfMain *fMain;
//---------------------------------------------------------------------------
#endif
