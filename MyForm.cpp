#include "MyForm.h" // <--- Dauguma kodo MyForm.h

#include "mylib.h"
//#include <windows.h>
	using namespace System;
	using namespace System::Windows::Forms;
	[STAThread]
		/*
		[DllImport("StudentasDll.dll", CallingConvention = CallingConvention.Cdecl)]
		extern double FinalGrade(const int* pazymiai, int pazymiaiLength, int EgzPazymys);
		*/
	void main(array<String^>^ args) {

		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);
		CLRuzd2Framework::MyForm form;
		Application::Run(% form);

		
	}
