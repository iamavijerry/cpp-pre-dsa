//  01. Print the squares of numbers from 1 to n.

#include <iostream>
using namespace std;

void printSqure(int n) {
  for (int i = 1; i <= n; i++) {
    cout << i * i <<  " " ;
  }
}

int main() {
  printSqure(10);
  return 0;
}