// 8. Print the sum of all odd numbers up to n.

#include <iostream>
using namespace std;

void sumOfOdd(int n) {
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    if (i % 2 != 0) {
      sum = sum + i;
    }
  }
  cout << sum;
}

int main() {
  sumOfOdd(10);
}