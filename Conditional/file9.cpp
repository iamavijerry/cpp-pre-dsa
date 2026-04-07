// 9. Take a character and check if it’s a vowel or consonant.

#include <iostream>
using namespace std;

void isVowel(char ch ){
  if(ch == 'a' || ch == 'e' ||ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' ||ch == 'I' || ch == 'O' || ch == 'U'){
    cout << "Vowel" << endl ;
  }
  else {
    cout << "Consonent" << endl ;
  }
}

int main(){
  isVowel('a');
  isVowel('p');
  isVowel('o');
}