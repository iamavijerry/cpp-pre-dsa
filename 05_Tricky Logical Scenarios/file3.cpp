// take day and month and check if it forms a valid calendar date (ignoring leap years).

#include<iostream>
using namespace std ;


void validCalender(int month, int days){

  if ((month <= 0 || month >=13)) {
    cout << "Invalid month" <<endl;
    return;
  }

  if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 ) && (days >=1 && days <= 31 )) {
    cout << "valid day and month. " << endl ; 
  } else if ((month == 2 || month == 4 || month == 6 || month == 9 || month == 11) && (days >=1 && days <= 30 ) ){
    cout << "valid day and month. " << endl ; 
  }
  else {
    cout << "Not a valid day and month. " << endl ; 
  }
}

int main(){
  validCalender(0, 22);
 validCalender(5, 2);
 validCalender(5, 20);
 validCalender(5, 37);
  return 0;
}