#include<iostream>
using namespace std ;
void flowerShop(float redRose , float whiteRose , float tulip) ;
main() 
{
	float redRose,whiteRose,tulip;
	cout << "Red Rose: " ;
	cin >> redRose ;
	cout << "White Rose: " ;
	cin >> whiteRose ;
	cout << "Tulips: " ;
	cin >> tulip ;
	flowerShop(redRose ,whiteRose,  tulip) ;
}

void flowerShop(float redRose , float whiteRose , float tulip)
{
	float originalPrice , priceAfterDiscount ;
	originalPrice  = redRose*2 + whiteRose*4.10 + tulip*2.5 ;
	priceAfterDiscount = originalPrice - originalPrice * 0.20 ;
	cout << "Original Price: $" << originalPrice << endl ;
	if(originalPrice > 200) 
  {
	cout << "Price after Discount: $" << priceAfterDiscount ;
  }
	else
  {
	cout << "No discount applied." ;
  }
}