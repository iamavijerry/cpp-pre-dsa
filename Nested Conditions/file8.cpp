// Take an alphabet check and check if it lies between ‘a’ and ‘m’ or ‘n’ and ‘z’

#include<iostream>
using namespace std;

void checkCheck(char ch){
  if(ch >= 65 && ch <= 77 || ch >= 97 && ch <=109 ) {
    cout << "Charecter lies b/w 'A' and 'M' " <<endl;
  } else if( ch >= 78 && ch <= 90 || ch >= 110 && ch <= 122 ){
    cout << "Charecter lies b/w 'N' and 'Z' "<< endl;
  }
} 

int main() { 
  checkCheck('X');
  checkCheck('h');
  checkCheck('y');
  checkCheck('V');
}