// 3. Take three numbers and print the median value (neither maximum nor minimum).

#include<iostream>
using namespace std ;

void medianValue(int a, int b, int c){
  int median ;
  if ((a >= b && a <= c) || (a <= b && a >= c)){
    median = a ;
  } 
  else if ((b >= a && b <= c) || (b <= a && b >= c)){
    median = b;
  } 
  else {
    median = c ;
  }

  cout << "Median : " << median << endl; 
}

int main(){
  medianValue(4, 5, 7);
  medianValue(10, 20, 15);
  medianValue(8, 3, 6);
  medianValue(100, 50, 75);
  medianValue(9, 1, 5);
  return 0;
}