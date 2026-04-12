// 10. Check whether a number is a perfect square (without using the square root function).


#include<iostream>
using namespace std;

void perfectSquare(int n){

  if(n < 0){
    cout << n << " is less than zero." << endl;
  }
  
  for (int i = 1; i <= n; i++)
  {
    if((i * i) == n){
      cout << "Perfect square is :" << i << endl ;
      return;
    } 
  }
  
  cout << n << " is not a perfect square." << endl;
}

int main() {
  perfectSquare(16);
  perfectSquare(-4);
  perfectSquare(17);
  perfectSquare(100);
  return 0;
}