// Take coordinates (x, y) and determine which quadrant the point lies in.

#include <iostream>
using namespace std;

void findQuadrant(int x, int y) {
  if (x == 0 && y == 0){
    cout << "Origin point" << endl ;
  } else if (x == 0){
    cout << "On Y-axis" << endl ;
  } else if(y == 0){
    cout << "On X-axis" << endl ;
  } else if(x > 0 && y > 0 ){
    cout << "1st Quadrant" << endl ;
  } else if (x < 0 && y > 0) {
    cout << "2nd Quadrant" << endl ;
  } else if (x < 0 && y < 0 ){
    cout << "3rd Quadrant" << endl ;
  } else {
    cout << "4th Quadrant" << endl ;
  }
}
int main(){
  findQuadrant(5, 6);
  findQuadrant(-5, 6);
  findQuadrant(-5, -6);
  findQuadrant(5, -6);
  findQuadrant(0 , 0);
  findQuadrant(0, 5);
  findQuadrant(5, 0);
}