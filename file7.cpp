// Take two numbers and determine whether both are even, both are odd, or one is even and one is odd.

#include<iostream>
using namespace std;

void determinNumber(int a, int b){
  if(a % 2 == 0 && b % 2 == 0){
    cout << "Both are even" <<endl ;
  } else if (a % 2 != 0 && b % 2 != 0){
    cout << "Both are Odd" <<endl;
  } else {
    cout << "one is even and one is odd" <<endl ;
  }
} 

int main() { 
  determinNumber(3, 6);
  determinNumber(4, 6);
  determinNumber(7, 9);
  return 0;
}