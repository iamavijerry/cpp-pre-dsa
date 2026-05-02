// 1 2 3 4 
// 5 6 7 8 
// 9 10 11 12 
// 13 14 15 16 

#include <iostream>
using namespace std;
int main() {
  int n = 4;
  int count  = 1 ;
  for(int row =1; row <= n; row++) {
    // cout << row << " ";
    for(int col = 1; col <= n ; col ++) {
      cout << count++ << " " ;
    }

    cout << endl ;
  }
}