// Take a 3-digit number and determine if the middle digit is the largest, smallest, or neither.


#include <iostream>
using namespace std;

int determineNumber(int n){
  if(n < 100 || n > 999) {
    cout << "Not a 3-digit number." << endl; 
    return 1; 
  }

  int firstDigit = n / 100 ;
  int secondDigit = (n / 10) % 10;
  int lastDigit = n % 10;

  cout << n << endl;
  cout << firstDigit << endl;
  cout << secondDigit << endl;
  cout << lastDigit << endl;

  if(secondDigit > firstDigit && secondDigit > lastDigit ){
    cout << "Middle is Larger Number" << endl ;
  } else if(secondDigit < lastDigit && secondDigit < firstDigit){
    cout << "Middle is Smaller Number" << endl;
  } else { 
    cout << "Neither large nor smaller" << endl ;
  }
  return 0;
}

int main() {
  determineNumber(798);
  determineNumber(125);
  determineNumber(967);
  determineNumber(12);
  return 0;
}

