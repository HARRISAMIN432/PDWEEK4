#include<iostream>
using namespace std ;
void printMenu() ;
void calculateAggregate(string name , float matricMarks , float interMarks , float ecatMarks) ;
void compareMarks(string nameStd1 , float ecatMarksStd1 , string nameStd2 ,float ecatMarksStd2 ) ;
main() 
{	string name , nameStd1 , nameStd2 ;
	float matricMarks,interMarks,ecatMarks,ecatMarksStd1,ecatMarksStd2 ; 
	system("cls") ;
	printMenu() ;
	cout << endl << endl << endl ;
	cout << "Name: " ;
	cin >> name ;
	cout << "Matric Marks: " ;
	cin >> matricMarks ;
	cout << "InterMarks: " ;
	cin >> interMarks ;
	cout << "ECAT Marks: " ;
	cin >> ecatMarks ; 
	calculateAggregate(name,matricMarks,interMarks,ecatMarks) ;
	cout << "Name of Std1: " ;
	cin >> nameStd1 ;
	cout << "ECAT marks of Std1: " ;
	cin >> ecatMarksStd1 ;
	cout << "Name of Std2: " ;
	cin >> nameStd2 ;
	cout << "ECAT marks of Std2: " ;
	cin >> ecatMarksStd2 ;
	compareMarks(nameStd1,ecatMarksStd1,nameStd2,ecatMarksStd2) ;	
}

void printMenu() 
{
	cout << "##    ## ##### #######    ##     ##### ##  ## ###### ###### #####" << endl ;
	cout << "##    ## ##      ##       ##     ## ## ##  ## #    # ##  ## ##   " << endl ;
	cout << "##    ## #####   ##       ##     ##### ###### #    # ###### #####" << endl ;
	cout << "##    ## ##      ##       ##     ## ## ##  ## #    # ## #   ##   " << endl ;
	cout << "######## #####   ##       ###### ## ## ##  ## ###### ##  ## #####" << endl ;
}

void calculateAggregate(string name , float matricMarks , float interMarks , float ecatMarks) 
{
	float aggregate ;
	aggregate = (matricMarks/1100)*30 + (interMarks/550)*30 + (ecatMarks/400)*40 ;
	cout << "The aggregate of " << name << " is " << aggregate << "percent" << endl;
}

void compareMarks(string nameStd1, float ecatMarksStd1, string nameStd2 , float ecatMarksStd2 )
{
	if (ecatMarksStd1 < ecatMarksStd2 ) 
  {
	cout << nameStd1 << " will be assigned first roll number. " ;
  }
	else 
  {
	cout << nameStd2 << " will be assigned first roll number. " ;
  }
	
}