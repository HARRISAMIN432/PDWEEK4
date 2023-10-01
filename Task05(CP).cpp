#include<iostream>
using namespace std ;
void possibleBonus (int myPosition , int friendPosition) ;
main() 
{
	int myPosition , friendPosition ;
	cout << "Enter your position: " ;
	cin >> myPosition ;
	cout << "Enter your friend's position: " ;
	cin >> friendPosition ;
	possibleBonus( myPosition , friendPosition) ;
}


void possibleBonus (int myPosition , int friendPosition) 
{
	int difference ;
	difference =  friendPosition - myPosition;
	if(difference <= 6 )
  {
	cout << "true" ;
  }
	else 
  {
	cout << "false" ;
  }
}