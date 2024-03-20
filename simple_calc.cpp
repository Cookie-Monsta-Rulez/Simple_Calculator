#include "Simple_Calculator.h"

using namespace System;

using namespace System::Windows::Forms;


void main(array<String^>^ args)

{

    Application::EnableVisualStyles();

    Application::SetCompatibleTextRenderingDefault(false);

    Simple_Calculator::MyForm form;

    Application::Run(% form);


}
