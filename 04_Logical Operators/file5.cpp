// Take income and age, and check if eligible for tax (age > 18 and income > 5 L). 

#include<iostream>
using namespace std ;

void taxEligibility(int income, int age) {
  if(age >= 18 && income >= 500000) {
    cout << "Yes! you are eligible for tax payer. " << endl;
  } else {
    cout << "No! you are not eligible for tax payer. " << endl;
  }
};


int main(){
  int age = 13;
  int income = 510000;
  taxEligibility(income, age);
  return 0;
}