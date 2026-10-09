// 9. Print the factorial of a given number. 

#include <iostream>
using namespace std;

void factorial(int n) {
  int fact = 1;
  for (int i = 1; i <= n; i++) {
    fact *= i;
  }
  cout << fact;
}

int main() {
  factorial(5);
}