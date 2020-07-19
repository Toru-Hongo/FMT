//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "MainUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMainForm *MainForm;
//---------------------------------------------------------------------------
__fastcall TMainForm::TMainForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::FormCreate(TObject *Sender)
{
	this->Edit1->Text      = "123";
	this->Button1->Caption = "OK";
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::Button1Click(TObject *Sender)
{
	MyClass *my = new MyClass();
	my->A = StrToInt(this->Edit1->Text);
	int ans;
	try{
		ans = my->Show();
	}catch(...){
		this->ListBox1->Items->Add("Error: " );
	}

	this->ListBox1->Items->Add("MyClass A: " + IntToStr(ans));
	delete my;
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::Button2Click(TObject *Sender)
{
	MyClass *my = new MyClass();
	my->D = StrToFloat(this->Edit1->Text);
	double dv = my->dShow();
	this->ListBox1->Items->Add("MyClass D: " + FloatToStr(dv));

	delete my;


}
//---------------------------------------------------------------------------
