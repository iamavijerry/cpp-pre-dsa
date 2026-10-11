//  8. . Check if a number is prime or not.

#include <iostream>
using namespace std;

void isPrimeNumber(int n) {
  if (n <= 1) {
    return;
  }

  bool isPrime = true;

  for (int i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      cout << "Not Prime" << endl;
      isPrime = false;
      break;
    }
  }

  if (isPrime) {
    cout << "Prime Numner" << endl;
  }
}

int main() {
  isPrimeNumber(23);
  return 0;
}