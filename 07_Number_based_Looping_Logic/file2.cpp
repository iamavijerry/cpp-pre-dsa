//  2. Print the reverse of a given number.

#include <iostream>
using namespace std;

void printReverse(int n) {
// cout << n << endl;
  int rev = 0;
  while (n > 0) {
    int ld = n % 10;  
    // cout << ld << endl ;
    rev = rev * 10 + ld;
    
    // cout << rev << endl ;
    n = n / 10;
  }
  cout << " " << rev << endl ;
}

int main() {
  printReverse(123456);
  return 0;
}
