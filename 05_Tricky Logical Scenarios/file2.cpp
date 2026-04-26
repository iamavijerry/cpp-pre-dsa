// 2. Take three numbers and check if they can form a Pythagorean triplet.
// Pythagorean triplet : (3, 4, 5), (5, 12, 13), (8, 15, 17), (7, 24, 25)

#include<iostream>
using namespace std ;

void pythagoreanTriplet(int x, int y, int z){
  int xSqr = x * x ;
  int ySqr = y * y ;
  int zSqr = z * z ;
  bool result = false ;
  cout << xSqr << " " << ySqr << " " << zSqr << endl ;

  if((xSqr > ySqr) && (xSqr > zSqr)) {
    result = zSqr + ySqr == xSqr ;
  } else if ((ySqr > xSqr) && (ySqr > zSqr)) {
    result = zSqr + xSqr == ySqr ;
  } else if ((zSqr > xSqr) && (zSqr > ySqr)){
    result = xSqr + ySqr == zSqr ;
  }

  if(result == true) {
    cout << "Number is Pythagorean triplet" << endl ;
  } else {
    cout << "Number is not Pythagorean triplet" << endl ;
  }
}

int main(){
 pythagoreanTriplet(3, 4, 5);
 pythagoreanTriplet(5, 12, 13);
 pythagoreanTriplet(4, 2, 5);


  return 0;
}