// 6. Take two numbers and print the larger one.

#include <iostream>
using namespace std;

void isLarger(int n, int m){
  if(n > m){
    cout << "Larger is : "<< n;
  } else {
    cout << "Larger is : " << m;
  }
}


int main(){
  isLarger(44,7);
}