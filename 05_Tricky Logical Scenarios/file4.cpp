// 4. Take time (hours and minutes) and print the smaller angle between the hour and minute hands.

#include<iostream>
#include<cmath>
using namespace std ;

void clockAngle(int hr, int mnt){
  
  // 1 minut = 6 degree .
  // 1 hr = 30 degree .
  // har minute pe hour hand 0.5° move karta hai . kyuki 30 / 60 .

  double mntAngle = 6 * mnt ;
  cout << mntAngle << endl ;

  double hrAngle = (30 * hr) + (0.5 * mnt);
  cout << hrAngle << endl ;

  double difference = abs(hrAngle - mntAngle);
  cout << difference << endl ;

  double smallerAngle = min(difference, 360 - difference) ;
  cout << smallerAngle << endl ;
}

int main(){
 clockAngle(2 , 10);
  return 0;
}