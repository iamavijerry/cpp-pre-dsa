// Take two angles of a triangle and compute the third angle.

#include<iostream>
using namespace std; 

void triangleAngles (int a, int b){

  if(a <= 0 || b <= 0 || (a+b) >=180){
    cout << "invalid Triangle" << endl ; 
    return ;
  }

  int thirdAngle = 180 - (a + b);
  cout << "The third angle is : " << thirdAngle << endl;

}

int main(){
  triangleAngles(60, 45);
  triangleAngles(100, 45);
  triangleAngles(100, 90);
  return 0;
}