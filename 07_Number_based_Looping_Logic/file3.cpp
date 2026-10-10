//  3. Check if a number is a palindrome.

#include <iostream>
using namespace std;

void palindromeCheck(int n) {
  int rev;
  int original = n;
  while (n > 0) {
    int lastDigit = n % 10;
    rev = rev * 10 + lastDigit;
    n /= 10;
  }

  cout << "Ori  " << original << endl ;
  cout << "Rev  " << rev << endl ;
  
  if (rev == original) {
    cout << "Palindrome" << endl;
  } else {
    cout << "NO Palindrome" << endl;
  }
}

int main() {
  // palindromeCheck(123);
  // palindromeCheck(121);
  palindromeCheck(898);
  return 0;
}