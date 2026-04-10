// 2. If the sides form a valid triangle, determine whether it is equilateral, isosceles, or scalane


#include<iostream>
using namespace std;


void validTriangle(int a, int b, int c) {
  if (a + b > c && a + c > b && b + c > a){
    cout << "Valid Triangle" << endl;
    if(a == b && b == c){
      cout << "Equilateral Triangle";
    } else if(a==b || b == c || a == c){
      cout << "Isosceles Triangle";
    } else {
      cout << "Scalane Triangle";
    }
  } else {
    cout << "Not a Valid Triangle";
  }
}

int main()
{
  validTriangle(5, 4, 3);
  return 0;
}
