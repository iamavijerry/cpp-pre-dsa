// Check if a number is a multiple of 7 or ends with 7

#include <iostream>
using namespace std;


void mulOfSeven(int n){
  int mul = (n % 7 == 0);
  int lastDigit = (n % 10 ==7);
  if(mul && lastDigit){
    cout << "Multiple of 7 & Ends with  7" << endl;
    return;
  } else if (mul) {
    cout << "Multiple of 7" << endl;
  } else if(lastDigit){
    cout << "Ends with  7" << endl;
  } else {
    cout << "No conditions matches" << endl;
  }
}
int main() {
  mulOfSeven (77);
  mulOfSeven(14);
  mulOfSeven(17);
  mulOfSeven(11);
  return 0;
}