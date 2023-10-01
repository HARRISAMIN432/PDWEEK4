#include<iostream>
#include<windows.h>
using namespace std ;
void gotoxy(int x, int y) ;
main() 
{
	system("cls") ;
	gotoxy(44,14) ;
	cout << "##  ## ###### ##### ##  ######"  << endl ;
	gotoxy(44,15) ;
	cout << "##  ## ##  ## ## ## ##  ##    "  << endl ;
	gotoxy(44,16) ;
	cout << "###### ###### ##### ##  ######"  << endl ;
	gotoxy(44,17) ;
	cout << "##  ## ##  ## ## #  ##      ##"  << endl ;
	gotoxy(44,18) ;
	cout << "##  ## ##  ## ##  # ##  ######"  << endl ;
}

void gotoxy(int x , int y ) 
{
	COORD coordinates ;
	coordinates.X=x ;
	coordinates.Y=y ;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates ) ;
}
