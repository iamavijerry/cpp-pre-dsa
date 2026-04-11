// . Check if an amount can be evenly currency notes into 2000, 500, and 100 currency notes


#include<iostream>
using namespace std;

int currencyDivision(int n){
  if( n < 100 ){
    return 0;
  }
  
  int remaining = n ;

  // use of 2000 note
  int note2000 = remaining / 2000;
  // cout << "After dividing by 2000 : "<< note2000 << endl;
  remaining = remaining % 2000 ;
  // cout << "Rermaing at 2000 : "<< remaining << endl;
  
  // use of 500 note 
  int note500 = remaining / 500 ;
  // cout << "After dividing by 500 : "<< note500 << endl;
  remaining = remaining % 500 ;
  // cout << "Rermaing at 500 : "<< remaining << endl;
  
  
  // use of 100 note
  int note100 = remaining / 100 ;
  // cout << "After dividing by 500 : "<< note100 << endl;
  remaining = remaining % 100 ;
  // cout << "Rermaing at 100 : "<< remaining << endl;


  // final check 
  if(remaining == 0 ){
    cout << "Possible to divide" << endl ;
  } else {
    cout << "NOT possible to divide" << endl ;
  }

  return 0;
}



int main() {
  currencyDivision(2500);
  currencyDivision(4000);
  currencyDivision(4234);
  return 0;
}