// Check if a number lies within the range [100, 999].

#include<iostream>
using namespace std;

void checkNum(int n) {
  if(n > 100 && n < 999){
    cout << "Lies" << endl;
  } else {
    cout << "Not Lies" << endl;
  }

}

int main() {
  checkNum(456);
  checkNum(4);
  checkNum(1027);
  checkNum(17);
  return 0;
}