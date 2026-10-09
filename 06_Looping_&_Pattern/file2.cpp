// 2. Print all even numbers between 1 and 100.

#include <iostream>
using namespace std;

void printEvenNumbers() {
  for (int i = 1; i <= 100; i++) {
    if (i % 2 == 0) {
      cout << i << endl ;
    }
  }
}

int main() {
  printEvenNumbers();
}