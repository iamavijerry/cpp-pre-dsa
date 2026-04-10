// check if one  of two given numbers is a multiple of the other


#include<iostream>
using namespace std;

void multipleOfOther(int a, int b){
  if(a % b == 0 || b % a == 0){
    cout << "The number are multiple of each other" << endl;
  } else {
    cout << "The number are not multiple of each other" << endl;
  }
} 

int main() { 
  multipleOfOther(5, 7);
  multipleOfOther(10, 5);
  return 0;
}