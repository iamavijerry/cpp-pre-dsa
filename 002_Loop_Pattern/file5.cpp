// a a a a a 
// b b b b b 
// c c c c c 
// d d d d d 
// e e e e e 

#include <iostream>
using namespace std;
int main() {
  int n = 5;
  for (int row = 1; row <= n; row++) {
    char ch = 'a' + (row - 1);
    for (int col = 1; col <= n; col++) {
      cout << ch << " ";
    }
    cout << endl;
  }
}