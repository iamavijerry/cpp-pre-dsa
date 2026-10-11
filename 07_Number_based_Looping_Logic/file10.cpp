// 10. Print sum of first n terms of Fibonacci series.

#include <iostream>
using namespace std;
void sumOfFibonacci(int n) {
  int a = 0, b = 1, c;

  for (int i = 1; i <= n; i++) {
    c = a + b;
    a = b;
    b = c;
  }

  cout << c;
}

int main() {
  sumOfFibonacci(10);
  return 0;
}