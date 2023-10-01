#include<iostream>
using namespace std ;
void tpChecker(int people , int numberOfRolls ) ;
main ()
{
	int people , numberOfRolls ;
	cout << "Number of people in the household: " ;
	cin >> people ;
	cout << "Number of rolls of TP: " ;
	cin >> numberOfRolls ;
	tpChecker( people , numberOfRolls ) ;
}

void tpChecker(int people , int numberOfRolls )
{
	int  numberOfSheetsNeededForOneDay , numberOfSheetsInRolls , numberOfDaysTissuesWillLast  ;
	numberOfSheetsNeededForOneDay = people * 57  ;
	numberOfSheetsInRolls = numberOfRolls * 500 ;
	numberOfDaysTissuesWillLast =(numberOfSheetsInRolls/numberOfSheetsNeededForOneDay ) ;
	if(numberOfDaysTissuesWillLast < 14  ) 
  {	
	cout << "Your TP will only last " << numberOfDaysTissuesWillLast << " days, buy more!" ;
  }
	else
  {
	 cout << "Your TP will last " << numberOfDaysTissuesWillLast << " days, no need to panic!" ;
  }
}