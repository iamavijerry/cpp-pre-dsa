// 6. Print the sum of first n natural numbers. 

#include <iostream>
using namespace std;

void sumOfNnumber(int n) {
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    sum = sum + i ;
  }
  cout << sum ;
}

int main() {
  sumOfNnumber(100);
}