//Take a number and print whether it’s positive, negative, or zero.
#include <iostream>
using namespace std;

  string isPositive(int param) {
    if(param == 0) {
      cout << "Number is Zero";
    }  else if (param > 0 ) {
      cout << "Positive";
    } else {
      cout << "Negative";
    }
    return "A";
  }

  string isPositive2(int param){
    return  (param > 0 ? "Positive" : (param < 0 ? "Negative " : "Zero"));
  }

int main(){
int num = 9;
// string result = isPositive(num);
string result = isPositive2(num);
cout << result ;
}
