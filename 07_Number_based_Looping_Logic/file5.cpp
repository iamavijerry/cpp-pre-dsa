// 5. Check if a number is an Armstrong number.

#include <iostream>
using namespace std;

void armStrong(int n) {
  int sum = 0, original = n;

  while (n > 0) {
    int lastD = n % 10;
    int cube = lastD * lastD * lastD;
    sum += cube;
    n = n / 10;
  }
  (sum == original) ? cout << "Armstrong" << endl
                    : cout << "Not Armstrong" << endl;
}

int main() {
  armStrong(153);
  return 0;
}