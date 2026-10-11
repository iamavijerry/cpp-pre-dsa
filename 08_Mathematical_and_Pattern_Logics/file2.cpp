// 2. Print cubes of numbers from 1 to n.

#include <iostream>
using namespace std;

void printCube(int n) {
  for (int i = 1; i <= n; i++) {
    cout << i << " = " << i * i * i << endl;
  }
}

int main() {
  printCube(10);
  return 0;
}