// 10. Print the product of digits of a given number.

#include <iostream>
using namespace std;

void productOfDisgits(int n) {
  int product = 1;

  if (n < 10) {
    return;
  }

  while (n > 0) {
    product *= n % 10;
    n /= 10;
  }
  cout << product << endl;
}

int main() {
  productOfDisgits(29);
  productOfDisgits(90);
  productOfDisgits(89);
}