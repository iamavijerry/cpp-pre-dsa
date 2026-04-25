// 8. Take a weekday number (1–7) and determine if it is a weekday or weekend. 

#include<iostream>
using namespace std ;


void weekend(int day){
  if(day == 6 || day == 7) {
    cout << "Weekend " << endl;
  } else {
    cout << "Weekday"  << endl ;
  }
}

int main(){
 weekend(3);
 weekend(1);
 weekend(4);
 weekend(7);
  return 0;
}