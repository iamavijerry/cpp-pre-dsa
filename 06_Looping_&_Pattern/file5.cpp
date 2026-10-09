//  5. Print the table of a given number (n × 1 to n × 10

#include <iostream>
using namespace std;

void printTable(int n) {
  for (int i = 1; i <= 10; i++) {
    cout << i << " * " << n << " = " << i * n << endl;
  }
}

int main() {
  printTable(1);
  printTable(2);
  printTable(3);
  printTable(5);
  printTable(10);
}