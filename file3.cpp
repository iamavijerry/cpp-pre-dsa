//Take marks (0–100) and print the corresponding grade (A/B/C/D/F).

#include<iostream>
using namespace std;

void checkMasks(int n){
  if(n >= 91 && n <=100){
    cout << "A Grade" << endl;
  } else if(n >= 76 && n <= 90){
    cout << "B Grade" << endl;
  } else if(n >= 61 && n <= 75){
    cout << "C Grade" << endl;
  } else if(n >= 45 && n <= 60){
    cout << "D Grade" << endl;
  } else {
    cout << "Fail" << endl;
  }
} 

int main()
{
  checkMasks(40); 
  checkMasks(50); 
  checkMasks(70); 
  checkMasks(80); 
  checkMasks(95); 
  return 0;
}