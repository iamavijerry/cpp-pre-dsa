//  9. Print Fibonacci series up to n terms.

#include <iostream>
using namespace std;

void printFibonacci(int n) {
  long last = 0, prev = 1, temp;
  for (int i = 1; i <= n; i++) {
    temp = last + prev ;
    last = prev ;
    prev = temp ;
    cout << temp << " ";
  }
}

int main() {
  printFibonacci(10);
  return 0;
}