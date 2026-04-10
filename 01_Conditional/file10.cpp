// 10. Take a character and check whether it’s uppercase, lowercase, a digit, or a special character.

#include <iostream>
#include <cctype>
using namespace std;

void checkCharacter(char ch){
  if(ch >= 65 && ch <=90){
    cout << " Uppercase" << endl;
  } else if (ch >= 97 && ch <= 122){
    cout << "Lowecase" << endl ;
  } else if (ch >= 48 && ch <= 57){
    cout << "Digit" << endl ;
  } else {
    cout << "Special Character" << endl;
  }
}

void buildInChecker(char ch){
  if(isupper(ch)) cout << "Upper" << endl;
  else if(islower(ch)) cout << "Lower" << endl;
  else if(isdigit(ch)) cout << "Digit" << endl;
  else cout << "Special Character" << endl;
}



int main() {
    checkCharacter('&');
    buildInChecker('7');
    return 0;
}