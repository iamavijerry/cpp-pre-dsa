// Take a password string and check basic rules (length ≥ 8 and contains at least one digit).

#include<iostream>
using namespace std ;


void passwordCode(string pass){
  int length = pass.size();
  bool hasDigit = false ;

  if(length < 8 ){
    cout << "Invalid Length" << endl;
    return ;
  } 
  
  for(int i = 0 ; i <= length; i++) {
    if (pass[i] >= '0' && pass[i] <= '9'){
      hasDigit = true ;
    }
  }

  if (hasDigit == true) {
    cout << "Password Contain at least one digit. " << endl;
  }
  else {
    cout << "Password does not contain at least one digit. " << endl;
  }
}


int main(){
 string password = "abcd1234" ; 

  passwordCode(password);
  passwordCode("abcddfds");
  return 0;
}