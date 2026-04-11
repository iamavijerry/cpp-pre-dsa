// Take a 4-digit number and check if the first and last digits are equal


#include <iostream>
using namespace std;

void digitFour(int n){

  if(n < 1000 && n > 9999) {
    cout << "Number is less than 4-digits";
    return ;
  }

  int firstDigit = n / 1000 ;
  int lastDigit = n % 10 ;

  // cout << firstDigit << endl ;
  // cout << lastDigit << endl ;

  if(firstDigit == lastDigit){
    cout << "first and last digit are equal" <<endl;
  } else {
    cout << "first and last digit are NOT equal" << endl;
  }
}



int main() {
  digitFour(2345);
  digitFour(2342);
  return 0;
}
