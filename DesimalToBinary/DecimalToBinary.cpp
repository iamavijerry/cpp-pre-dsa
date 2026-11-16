#include <iostream>
using namespace std;

int main() {
  // Decimal To Binary
  int n = 13, ans = 0, mul = 1;

  while (n) {
    //  rem
    int rem = n % 2;
    // quo
    n = n / 2;
    // ans
    ans = rem * mul + ans;
    // mul
    mul *= 10;
  }
  cout << ans << endl;
  cout << 1 % 2 << "-" << 1 / 2 << endl;
  cout << "_________________________________" << endl;

  int num = 1001;

  int rem2, mul2 = 1, ans2 = 0;
  while (num) {
    rem2 = num % 2;
    // cout << rem2 << endl;
    num /= 10;
    // cout << num << endl;
    ans2 = rem2 * mul2 + ans2;
    // cout << ans2 << endl;
    mul2 = mul2 * 2;
    // cout << mul2 << endl;
  }
  cout << ans2 << endl;
}