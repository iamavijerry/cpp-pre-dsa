// 8. Take an integer (1–9999) and check if the sum of its digits is greater
// than the product of its digits.

#include <iostream>
using namespace std;

void sumNProduct(int n) {
  int sum = 0, product = 1;
  while (n > 0) {
    int lastDigit = (n % 10);
    sum = sum + lastDigit;
    product = product * lastDigit;
    n = n / 10;
  }


  (sum > product) ? cout << "Sum is Greater" << endl : cout << "Product is Greater" << endl;
}

int main() {
  sumNProduct(24);
  sumNProduct(40);
}