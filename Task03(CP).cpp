#include<iostream>
using namespace std ;
void discountAirline(string country , float amount) ;
main()
{
	float amount ;
	string country ;
	cout << "Enter the country's name: " ;
	cin >> country ;
	cout << "Enter the ticket price in dollars: $" ;
	cin >> amount ;
	discountAirline(country , amount) ; 
}

void discountAirline(string country , float amount)
{
	float ticketPriceAfterDiscount ;
	if (country == "Pakistan") 
  {
	ticketPriceAfterDiscount =amount-(amount * 0.05) ;
	cout << "Final ticket price after discount: $" << ticketPriceAfterDiscount  ;
  }
	if (country == "Ireland" ) 
  {
	ticketPriceAfterDiscount=amount- amount * 0.10 ;
	cout << "Final ticket price after discount: $" << ticketPriceAfterDiscount ;
  }
	if (country == "India" ) 
  {
	ticketPriceAfterDiscount = amount - amount * 0.20 ;
	cout << "Final ticket price after discount: $" << ticketPriceAfterDiscount ;
  }
	if (country == "England" )
  {
	ticketPriceAfterDiscount = amount - amount * 0.30 ;
	cout << "Final ticket price after discount: $" << ticketPriceAfterDiscount ;
  }
	if (country == "Canada" )
  {
	ticketPriceAfterDiscount =amount - amount * 0.45 ;
	cout << "Final ticket price after discount: $" << ticketPriceAfterDiscount ;
  }	
} 