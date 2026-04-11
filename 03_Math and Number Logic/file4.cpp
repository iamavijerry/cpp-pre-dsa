// Check whether a given integer is single-digit, double-digit, or multi-digit.

#include <iostream>
using namespace std;

void checkDigit(int n){
  if(n > 0 && n <= 9) {
    cout << "Single-digit" << endl ;
  } else if(n >+ 10 && n <= 99){
    cout << "Double-digit" << endl ;
  } else {
    cout << "Multi-digit" << endl ;
  }
} ;
int main() {
  checkDigit(1);
  checkDigit(12);
  checkDigit(123);
}