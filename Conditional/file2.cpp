#include<iostream>
using namespace std;
//Check if a number is even or odd."


void isEven(int n) {
  if(n%2 == 0) {
    cout<< "Even";
  } else{
    cout << "Odd";
  }
}
string isOdd(int n){
 return(n % 2 == 0 ? "Even" : "Odd");
}

int main() {
  int num = 8;
  isEven(num);
  string result = isOdd(num);
  cout << result;
}