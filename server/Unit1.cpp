#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma hdrstop
#include "main.h"
#include "Unit2.h"
#include "Unit3.h"
#include "clase.h"
#include "Photo.h"
#include "Player.h"
#include<algorithm>
#include<vector>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfMemory *fMemory;
//---------------------------------------------------------------------------
__fastcall TfMemory::TfMemory(TComponent* Owner)
        : TForm(Owner)
{
player1=new Player();
maxclick=0;
}
//---------------------------------------------------------------------------
void __fastcall TfMemory::btnExitClick(TObject *Sender)
{
  fWarning->Show();
}
//---------------------------------------------------------------------------
void __fastcall TfMemory::btnPlayClick(TObject *Sender)
{
void Loadcards(Photo *card[],int i,int nr);
//Spatele cartilor

 for(int i=0;i<32;i++)
 {
   firstcard[i]=new Photo();
   firstcard[i]->Image->Parent=fMemory;
   firstcard[i]->Image->OnClick=FlipCard;
   firstcard[i]->Image->Picture->LoadFromFile("imaginiJoc//spatecarte2.bmp");
   }

 //Fata cartilor
 for(int i=0;i<32;i++)
 {
 secondcard[i]=new Photo();
 secondcard[i]->Image->Parent=fMemory;
 secondcard[i]->SetVectorPozitie(0);
 }

 //Crearea unui vector de pozitie pentru a putea pune cartile random
   std::vector<int> VectorPozitie;
   for(int i=0;i<32;i++)
   {
   VectorPozitie.push_back(i);
   }
   std::random_shuffle(VectorPozitie.begin(), VectorPozitie.end());
   int pozitie=0;
   std::vector<int>::iterator it;
   for(it=VectorPozitie.begin();it!=VectorPozitie.end();++it)
   {
   secondcard[pozitie]->SetVectorPozitie(*it);
   pozitie++;
   }
   //Incarcarea pozelor pentru fetele cartilor si setarea pozitiei
   for(int i=0;i<32;i++)
   {
   Loadcards(secondcard,i,secondcard[i]->GetVectorPozitie());
   }
  //Setarea pozitiei cartilor
 int k=0;
 for(int i=0;i<4;i++)
  {
  for(int j=0;j<8;j++)
  {
    firstcard[k]->SetImage(10+j*100,10+i*149,firstcard[k]->Image);
    secondcard[k]->SetImage(10+j*100,10+i*149,secondcard[k]->Image);
    secondcard[k]->Image->Visible=false;
    k++;
  }
  }
}
//------------------------------------------------------------------------------
void __fastcall TfMemory::FlipCard(TObject *Sender)
{
TImage *card = dynamic_cast<TImage *>(Sender);// Ce carte a fost apasata
int k=0;
int win=0;
int left=card->Left;
int top=card->Top;
if(maxclick==0 || maxclick==1)
{
 for(int i=0;i<4;i++)
  {
    for(int j=0;j<8;j++)
    {
    if((firstcard[k]->Image->Left==left) && (firstcard[k]->Image->Top==top))
     {
       pozitie[maxclick]=k;
     }
     k++;
    }
   }
   firstcard[pozitie[maxclick]]->Image->Visible = false;
   secondcard[pozitie[maxclick]]->Image->Visible =true;
   maxclick++;
  }
else
{
  if(maxclick==2)
  {
   if(secondcard[pozitie[0]]->GetVectorPozitie()%2==0)
    {
     if(secondcard[pozitie[0]]->GetVectorPozitie()+1 == secondcard[pozitie[1]]->GetVectorPozitie())
     {
      win++;
      player1->Inc();
     }
    }
   if(secondcard[pozitie[0]]->GetVectorPozitie()%2==1)
    {
     if(secondcard[pozitie[0]]->GetVectorPozitie()-1 == secondcard[pozitie[1]]->GetVectorPozitie())
     {
      win++;
      player1->Inc();
      }
     }
    if(win==0)
       for(int i=0;i<2;i++)
       {
        firstcard[pozitie[i]]->Image->Visible=true;
        secondcard[pozitie[i]]->Image->Visible=false;
       }
    if(player1->GetScore()==15)
    {
     for(int i=0;i<32;i++)
      {secondcard[i]->Image->Visible=true;
       firstcard[i]->Image->Visible=false;
      }
     fWon->Show();
    }
    else
    {
    maxclick=0;
    int left2 = card->Left;
    int top2 = card->Top;
    for(int i=0;i<4;i++)
       for(int j=0; j<8; j++)
       {
         if((left2 == firstcard[k]->Image->Left) && (top2 == firstcard[k]->Image->Top))
       {
           pozitie[maxclick] = k;
       }
        k++;
       }
    }
   }
}
}//block functie
//Functie pentru incarcarea pozelor----------------------------------------------------------------
void Loadcards(Photo *card[],int i,int nr){
if(nr == 0 || nr == 1)
{
card[i]->Image->Picture->LoadFromFile("imaginiJoc//azir-classic.bmp");
}
if(nr == 2 || nr == 3)
{
card[i]->Image->Picture->LoadFromFile("imaginiJoc//blitzcrank-classic.bmp");
}
if(nr == 4 || nr == 5)
{
card[i]->Image->Picture->LoadFromFile("imaginiJoc//darius-classic.bmp");
}
if(nr == 6 || nr == 7)
{
card[i]->Image->Picture->LoadFromFile("imaginiJoc//draven-draven.bmp");
}
if(nr == 8 || nr == 9)
{
card[i]->Image->Picture->LoadFromFile("imaginiJoc//ekko-classic.bmp");
}
if(nr == 10 || nr == 11)
{
card[i]->Image->Picture->LoadFromFile("imaginiJoc//evelynn-classic.bmp");
}
if(nr == 12 || nr == 13)
{
card[i]->Image->Picture->LoadFromFile("imaginiJoc//garen-classic.bmp");
}
if(nr == 14 || nr == 15)
{
card[i]->Image->Picture->LoadFromFile("imaginiJoc//jax-classic.bmp");
}
if(nr == 16 || nr == 17)
{
card[i]->Image->Picture->LoadFromFile("imaginiJoc//jhin.bmp");
}
if(nr == 18 || nr == 19)
{
card[i]->Image->Picture->LoadFromFile("imaginiJoc//kaisa-classic.bmp");
}
if(nr ==20 || nr == 21)
{
card[i]->Image->Picture->LoadFromFile("imaginiJoc//kayn-classic.bmp");
}
if(nr == 22 || nr == 23)
{
card[i]->Image->Picture->LoadFromFile("imaginiJoc//lee-sin-muay-thai.bmp");
}
if(nr == 24 || nr == 25)
{
card[i]->Image->Picture->LoadFromFile("imaginiJoc//morgana-victorious.bmp");
}
if(nr == 26 || nr == 27)
{
card[i]->Image->Picture->LoadFromFile("imaginiJoc//pyke-classic.bmp");
}
if(nr == 28 || nr == 29)
{
card[i]->Image->Picture->LoadFromFile("imaginiJoc//rengar-classic.bmp");
}
if(nr == 30 || nr == 31)
{
card[i]->Image->Picture->LoadFromFile("imaginiJoc//teemo-classic.bmp");
}
}
//---------------------------------------------------------------------------

