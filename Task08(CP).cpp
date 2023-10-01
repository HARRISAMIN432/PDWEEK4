#include<iostream>
using namespace std ;
void pet(int holidays) ;
main() 
{
	int holidays ;
	cout << "Holidays: " ;
	cin >> holidays ;
	pet (holidays) ;
}

void pet(int holidays)
{
	int workingDays ,  timeForGames , differenceFromNormal , minutes , minutesToHours ;
	workingDays = 365 - holidays ;
	timeForGames = (holidays * 127 + workingDays * 63 ) ;
	if ( timeForGames >= 30000)
  {
	differenceFromNormal = timeForGames - 30000 ;
	minutesToHours = differenceFromNormal / 60 ;
	minutes = differenceFromNormal % 60 ;
	cout << "Tom will run away" << endl ;
	cout << minutesToHours << " hours and " << minutes << " minutes for play" ;
  }
	else
  {
	differenceFromNormal = 30000 - timeForGames ;
	minutesToHours = differenceFromNormal / 60 ;
	minutes = differenceFromNormal % 60 ;
	cout << "Tom sleeps well" << endl ;
	cout << minutesToHours << " hours and " << minutes << " minutes less for play" ;
  }	
}