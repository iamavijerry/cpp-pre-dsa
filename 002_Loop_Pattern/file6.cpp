// a b c d e 
// a b c d e 
// a b c d e 
// a b c d e 
// a b c d e 

#include <iostream>
using namespace std;
int main() {
  int n = 5;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      char ch = 'a' + (j - 1);
      cout << ch << " ";
    }
    cout << endl ;
  }
}