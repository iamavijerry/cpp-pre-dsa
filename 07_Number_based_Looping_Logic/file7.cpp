//  7. Print all prime numbers between 1 and 100.

#include <iostream>
using namespace std;

void isPrimeNumber(int n) {
  if (n <= 1) {
    return;
  }

  int isPrime = true;

  for (int i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      isPrime = false;
      break;
    }
  }

  if (isPrime) {
    cout << n << " ";
  }
}

int main() {
  for (int num = 2; num <= 500; num++) {
    isPrimeNumber(num);
  }

  return 0;
}