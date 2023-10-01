#include<iostream>
using namespace std ;
void IsEqual(int firstNumber , int secondNumber) ;
main() 
{
	int firstNumber,secondNumber ;
	cout << "Enter the first number: " ;
	cin >> firstNumber ;
	cout << "Enter the second number: " ;
	cin >> secondNumber ;
	IsEqual(firstNumber,secondNumber) ;
}

void IsEqual(int firstNumber , int secondNumber)
{
	if(firstNumber==secondNumber) 
  {
	cout << "true" ;
  }
	else 
  {
	cout << "false" ;
  }
}