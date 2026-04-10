// Take a 3-digit number and check if all digits are distinct.

#include <iostream>
using namespace std;

int distinctNumber(int n){
  if(n < 0 || n > 999) {
    cout << "Not a distinct number." ;
    return 1; 
  }

  int firstDigit = n / 100 ;
  int secondDigit = (n / 10) % 10;
  int lastDigit = n % 10;

  cout << n << endl;
  cout << firstDigit << endl;
  cout << secondDigit << endl;
  cout << lastDigit << endl;

  if(firstDigit != secondDigit && firstDigit != lastDigit && secondDigit != lastDigit){
    cout << "Distinct number." << endl ;
  } else{
    cout << "Not a distinct number" << endl;
  }
  return 0;
}

int main() {
  distinctNumber(123);
  distinctNumber(133);
  return 0;
}

