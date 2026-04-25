// 6. Take two numbers and check if both are positive and their sum is less than 100.

#include<iostream>
using namespace std ;


void positiveAndLessThan100(int a, int b){
  if(a > 0 && b > 0  && a+b < 100) {
    cout << "@Condition true";
  } else 
  cout << "@Condition False";
}

int main(){
  int a = 43;
  int b = 3;
  positiveAndLessThan100(a, b);
  return 0;
}