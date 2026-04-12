// 1. Take a character and check if it is a letter, a digit, or neither.

#include<iostream>
using namespace std;

void checkCharater(char ch){
  if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
    cout << "This is a character." <<endl;
  } else if(ch >= '0' && ch <= '9'){
    cout << "This is a digit." <<endl;
  } else {
    cout << "Neither character nor digit." <<endl;
  }
  
}

int main(){
  checkCharater('5');
  checkCharater('a');
  checkCharater('&');
  return 0;
}