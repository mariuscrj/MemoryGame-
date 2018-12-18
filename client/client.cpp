//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("main.cpp", fMain);
USEFORM("Unit1.cpp", fMemory);
USEFORM("Unit2.cpp", fWarning);
USEFORM("Unit3.cpp", fWon);
USEFORM("Unit4.cpp", fMulClient);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->CreateForm(__classid(TfMain), &fMain);
                 Application->CreateForm(__classid(TfMemory), &fMemory);
                 Application->CreateForm(__classid(TfWarning), &fWarning);
                 Application->CreateForm(__classid(TfWon), &fWon);
                 Application->CreateForm(__classid(TfMulClient), &fMulClient);
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        catch (...)
        {
                 try
                 {
                         throw Exception("");
                 }
                 catch (Exception &exception)
                 {
                         Application->ShowException(&exception);
                 }
        }
        return 0;
}
//---------------------------------------------------------------------------
