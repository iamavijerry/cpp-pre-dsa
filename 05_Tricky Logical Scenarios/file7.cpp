// 7.  Take a 3-digit number and check if the sum of the first and last digit equals the middle digit.

#include <iostream>
using namespace std;

void fun(double a, double b, double c) {
  if (a + c != b) {
    cout << "Not Equals \n";
    return;
  } else {
    cout << "Equels. \n";
  }
}

int main() {
  fun(2, 5, 3);
  fun(2, 5, 5);
}