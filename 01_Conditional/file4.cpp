//4. Check if a number is divisible by both 3 and 5.

#include <iostream>
using namespace std;

void isDivisible1(int n){
  if(n % 3 == 0 && n % 5 == 0) {
    cout << "Yes it is divisible by both";
  } else {
    cout << "No' it is divisible by both";
  }
}
bool isDivisible(int n){
  return (n % 3 == 0 && n % 5 == 0 ? true : false);
}

int main(){
  int n = 15;
  isDivisible1(n);
  bool result = isDivisible(n);
  // cout << result ;
}