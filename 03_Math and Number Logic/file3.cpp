// Take a 4-digit number and check if the first and last digits are equal

// void digitFour(int n){

// }

#include <iostream>
using namespace std;

int main()
{
  int n = 4234 ;

  if(n < 1000 && n > 9999) {
    cout << "Number is less than 4-digits";
    return 0;
  }

  int firstDigit = n / 1000 ;
  int lastDigit = n % 10 ;

  cout << firstDigit << endl ;
  cout << lastDigit << endl ;
  
  if(firstDigit == lastDigit){
    cout << "first and last digit are equal";
  } else {
    cout << "first and last digit are NOT equal";
  }
  

  return 0;
}
