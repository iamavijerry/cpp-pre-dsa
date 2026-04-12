// 2. Take a number and print “Fizz” if divisible by 3, “Buzz” if divisible by 5, and “FizzBuzz” if divisible by both.


#include<iostream>
using namespace std;


void isDivisible(int n){
  if (n % 3 == 0 && n % 5 == 0){
    cout << "FizzBuzz" << endl;
    return ;
  } else if(n % 3 == 0){
    cout << "Fizz" << endl;
  } else if(n % 5 == 0){
    cout << "Buzz" << endl;
  } else {
    cout << "No condition matches" << endl ;
  }
}
int main(){
  isDivisible(3);
  isDivisible(15);
  isDivisible(30);
  isDivisible(20);
  isDivisible(8);
  return 0;
}