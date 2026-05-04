// * * * * * * 
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 

#include <iostream>
using namespace std;
int main() {
  int n = 6;

  for (int row = n; row >= 1; row--) {
    for (int col = row; col >= 1; col--) {
      cout << "* ";
    }
    cout << endl;
  }
}
