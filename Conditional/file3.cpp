#include <iostream>
using namespace std;
// Check if a number is divisible by 5.

void isDivisible1(int n){
  if(n % 5 == 0) {
    cout << "Yes its Divisible";
  } else {
    cout << "Not Divisible";
  }
}


bool isDivisible(int n){
  return (n % 5 == 0 ? true : false);
}
int main(){
  int number = 5802;
  isDivisible1(number);
  bool result = isDivisible(number);
  // cout<< result;
}