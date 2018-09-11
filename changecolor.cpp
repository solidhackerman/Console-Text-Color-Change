#include<iostream>
#include <conio.h>
#include<windows.h>
using namespace std;

int main()
{
	int i;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout<<"Hello!!!";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << "Second Colour";
	getch();
	return 0;
}