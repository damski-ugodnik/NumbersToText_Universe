#include "Converter1.h"
#include <locale.h>
#include <ctype.h>
#include <stdlib.h>

using namespace
System;
using namespace
System::Windows::Forms;
using namespace
DtoS;


[STAThreadAttribute]

int main(array<String^>^ argv)
{
    setlocale(LC_ALL,
        "eng");
    Application::SetCompatibleTextRenderingDefault(false);

    Application::EnableVisualStyles();

    DtoS::Converter1 frm;
    Application::Run(% frm);

}


System::Void DtoS::Converter1::button1_Click(System::Object^ sender, System::EventArgs^ e) {
    char* num = ToCnstChr(textBox1->Text);
    int i = 0;
    while (num[i] != '\0') {
        if (!isdigit(num[i])) {
            if (num[0] == '-') {
                i++;
                continue;
            }

            label1->Text = "Invalid input: insert only integer numbers";;
            return System::Void();
        }
        i++;
    }
    int n = atoi(ToCnstChr(textBox1->Text));
    label1->Text = conversion(n);
    return System::Void();
}


