// 9. Take electricity units consumed and calculate the bill as per slabs (using if-else).

// NOTE : i dont know real life slab

#include<iostream>
using namespace std ;


void electercityCal(int unit){
  cout << unit * 6 << " Ruppes bill is panding"  << endl;
}

void calbill(int unit) {
  if(unit >= 1 && unit <= 10) {
    cout << "100 ruppe bill panding" <<endl ;
  }
}

int main(){
  calbill(6);
  electercityCal(34);
  electercityCal(322);
  electercityCal(387);
  electercityCal(44);
  return 0;
}