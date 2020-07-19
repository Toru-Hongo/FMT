//---------------------------------------------------------------------------

#pragma hdrstop

#include "ClassUnit.h"

//コンストラクタ
MyClass::MyClass(){}

//デストラクタ
MyClass::~MyClass(){}


int MyClass::Show(){

	return A;
}

double MyClass::dShow(){
	return D * 1.2;
}


//---------------------------------------------------------------------------
#pragma package(smart_init)
