// a 
// b b 
// c c c 
// d d d d 
// e e e e e 

#include <iostream>
using namespace std;
int main() {
  int n = 5;
  for (int row = 1; row <= n; row++) {
    for (int col = 1; col <= row; col++) {
      char ch = 'a' + (row - 1);
      cout << ch << " " ;
    }
    cout << endl;
  }
}