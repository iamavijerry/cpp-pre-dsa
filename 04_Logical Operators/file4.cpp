//4. Take 24-hour time (hours and minutes) and print whether it is AM or PM.

#include<iostream>
using namespace std ;

void AMorPM(int hour, int minutes){
  if(hour < 0 && minutes < 0 || hour > 24 && minutes > 60){
    cout << " Invalid time." << endl ;
  } else if (hour > 0 && hour <= 12 && minutes < 1) {
    cout << "AM" ;
  } else  {
    cout << "PM"; 
 }
}



int main(){

  int hr = 12;
  int mn = 45;
  AMorPM(hr, mn);
  return  0 ;
}