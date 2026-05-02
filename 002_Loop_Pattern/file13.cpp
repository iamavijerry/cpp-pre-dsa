

#include <iostream>
using namespace std;
int main() {
  int n = 26;
  for (int row = 1; row <= n; row++) {
    for (int col = 1; col <= row; col++) {
      char ch = 'a' + (row - 1);
      cout << ch << " " ;
    }
    cout << endl;
  }
}