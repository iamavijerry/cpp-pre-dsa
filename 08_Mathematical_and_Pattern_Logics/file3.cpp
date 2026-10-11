// 3. Print all numbers between a and b divisible by 7.

#include <iostream>
using namespace std;

void divisibleBy7(int a, int b) {
  for (int i = a; i <= b; i++) {
    if(i % 7 ==0 ) {
      cout << i << "  " ;
    }
  }
}

int main() {
  divisibleBy7(1, 50);
  return 0;
}