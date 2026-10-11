// 4. Find HCF (GCD) of two numbers using loops.

#include <iostream>
using namespace std;
void gcd(int a, int b) {
  // cout << "A = " << a << "  " << "B = " << b << endl;
  while (b > 0) {
    int rem = a % b;
    // cout << "Rem : " << rem << endl;
    a = b;
    // cout << "A : " << a << endl;
    b = rem;
    // cout << "B : " << b << endl;
  }
  cout << a << endl;
}

int main() {
  // gcd(10, 15);
  // gcd(16, 24);
  // gcd(20, 30);
  gcd(30, 20);
  return 0;
}