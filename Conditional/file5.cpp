//5. Check if a given year is a leap year.


//4. Check if a number is divisible by both 3 and 5.

#include <iostream>
using namespace std;


void isLeepYear(int year){
  if(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)){
    cout<<"Leep Year";
  } else {
    cout<<"Not Leep Year";
  }
}

int main(){
  isLeepYear(2026);
}