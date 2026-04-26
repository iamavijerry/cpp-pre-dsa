// 1. Take coordinates (x, y) and check if the point lies on the X-axis, Y-axis, or at the origin 


#include<iostream>
using namespace std ;


void coordinates(int x, int y){
  if(x == 0 && y == 0 ) {
    cout << "Lies on Center Point" << endl;
  } 
  else if ((x > 0 || x < 0) && y == 0){
    cout << "Lies on X - Axis" << endl ;
  } 
  else if (x == 0 && (y > 0 || y < 0)) {
    cout << "Lies on Y-Axis" << endl ;
  } 
  else if ((x > 0 || x < 0) && (y > 0 || y < 0) ) {
    cout << "Not lies on any axis" << endl;
  }
}

int main(){
 coordinates(10, 0);
 coordinates(10, 10);
 coordinates(0, 10);
  return 0;
}