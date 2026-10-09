// 7. Print the sum of all even numbers up to n.

#include <iostream>
using namespace std;

void sumOfEven(int n) {
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    if (i % 2 == 0) {
      sum = sum + i;
    }
  }
  cout << sum;
}

int main() {
  sumOfEven(10);
}
