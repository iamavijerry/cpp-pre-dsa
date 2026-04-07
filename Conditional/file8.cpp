//8. Take a temperature value and print “Cold”, “Warm”, or “Hot” using range conditions.
// Cold → 0°C se 15°C tak
// Warm → 16°C se 30°C tak
// Hot → 31°C se upar

#include <iostream>
using namespace std;

void temperature(int temp){
  if(temp < 0 || temp >0 && temp <= 15){
    cout <<temp <<" is Cold" << endl;
  } else if(temp > 15 && temp < 31){
    cout <<temp <<" is Warm" << endl;
  } else {
    cout <<temp <<" is Hot" << endl;
  }
}

int main(){
  temperature(-11);
  temperature(22);
  temperature(33);
}