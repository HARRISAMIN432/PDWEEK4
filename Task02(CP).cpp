#include<iostream>
using namespace std ;
void Reverse(string trueOrFalse) ;
main() 
{
	string trueOrFalse ;
	cout << "Enter 'true' or 'false': " ;
	cin >>  trueOrFalse ;
	Reverse( trueOrFalse ) ;
}

void Reverse(string trueOrFalse) 
{
	if ( trueOrFalse == "true" )
  {
	cout << "false" ;
  }
	else
  {
	cout << "true" ;
  }
}