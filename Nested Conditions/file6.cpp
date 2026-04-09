// Check voting eligibility for a given age (18+)

#include<iostream>
using namespace std;

void voterEligible(int age){
 if(age<18){
  cout << "Can't vote" << endl;
} else {
   cout << "You Can vote" << endl; 
 }
}
 

int main() { 
  voterEligible(4);
  voterEligible(17);
  voterEligible(40);
  return 0;
}