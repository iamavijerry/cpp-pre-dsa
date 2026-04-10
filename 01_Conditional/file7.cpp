// 7. Take three numbers and print the largest.

#include <iostream>
using namespace std;

void isLarger(int n, int m, int o){
  if(n > m && n > o){
    cout << "Larger is : "<< n;
  } else if(m > n && m > o) {
    cout << "Larger is : " << m;
  } else {
    cout << "Larger is : " << o;
  }
}


int main(){
  isLarger(44,78, 56);
}