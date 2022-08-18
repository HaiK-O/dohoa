#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;
void textcolor(int x)
{
	HANDLE mau;
	mau=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(mau,x);
}
int main()
{
    for(int i=0; i < 255; i++){
        textcolor(i);
        cout<< "Mau nay la so :  " << i << endl;
    }
    system("pause");
}