//  4. Find the sum of digits of a number

#include <iostream>
using namespace std;

void sumOfDigits(int n) {
  int sum = 0;
  while (n > 0) {
    int lastD = n % 10;
    sum += lastD;
    n /= 10;
  }
  cout << sum << endl ;
}

int main() {
  sumOfDigits(1234) ;
  return 0;
}