// 1. Count the number of digits in a given number.

#include <iostream>
using namespace std;

void countDigits(int n) {
  int count = 0;

  while (n > 0) {
    int ld = n % 10;
    count++;
    n = n / 10;
  }

  cout << count;
}

int main() {
  countDigits(123456789);
}