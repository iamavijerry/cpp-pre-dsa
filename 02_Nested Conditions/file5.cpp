
// Take the hour of the day (0–23) and print “Good Morning”, “Good Afternoon”, “Good Evening”, or “Good Night

#include<iostream>
using namespace std;

void greeting(int time){
  if(time > 0 && time < 12) {
    cout <<"Good Morning" << endl;
  } else if(time > 12 & time < 17){
    cout << "Good Afternoon" << endl ;
  } else if (time > 17 && time <= 20){
    cout << "Good Evening" ;
  } else {
    cout << "Good Night" ;
  }
} 

int main() { 
  greeting(5);
  greeting(15);
  greeting(21);
  return 0;
}