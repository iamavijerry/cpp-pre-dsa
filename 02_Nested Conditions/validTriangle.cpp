// 1. Take three sides and check if they form a valid triangle.

#include<iostream>
using namespace std;

void validTriangle(int a, int b, int c) {
  if (a + b > c && a + c > b && b + c > a){
    cout << "Valid Triangle";
  } else {
    cout << "Not a Valid Triangle";
  }
}

int main()
{
  validTriangle(5, 4, 3);
  return 0;
}
