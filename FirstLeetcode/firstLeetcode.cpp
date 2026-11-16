#include <iostream>
using namespace std;

int main() {
  int num = 999;
  while (num >= 10) {
    int sum = 0;
    while (num) {
      int ld = num % 10;
      num /= 10;
      sum += ld;
    }
    num = sum;
  }
  cout << num;
}

// class Solution {
//  public:
//   int addDigits(int num) {
//     while (num >= 10) {
//       int sum = 0;
//       while (num) {
//         int lastDigit = num % 10;
//         sum += lastDigit;
//         num /= 10;
//       }
//       num = sum;
//     }
//     return num;
//   }
// };
