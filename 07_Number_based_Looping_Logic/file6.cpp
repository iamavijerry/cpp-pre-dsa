//  6. Check if a number is a perfect number.

#include <iostream>
using namespace std;

void perfectSqr(int n) {
  int sum = 0 , original = n;
  for (int i = 1; i <= n / 2; i++) {
    if (n % i == 0) {
      sum += i;
    }
  }

  // cout << "Sum " << sum << endl;
  // cout << "Original " << original << endl;

  if (sum == original) {
    cout << "Perfect Number." << endl;
  } else {
    cout << "Not Perfect Number." << endl;
  }
}

int main() {
  perfectSqr(9);
  perfectSqr(6);
  perfectSqr(28);
  return 0;
}