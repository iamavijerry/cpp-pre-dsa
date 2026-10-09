// 10. Take a year and print the corresponding century (e.g., “19th century”,
// “20th century”)

#include <iostream>
using namespace std;

void findCentury(int year) {
  if (year == 1) {
    cout << "0th century";
    return;
  }

  int century = (year - 1) / 100 + 1;
  cout << century << endl;
}

int main() {
  findCentury(2);
  findCentury(100);
  findCentury(200);
  findCentury(300);
  findCentury(400);
  findCentury(500);
  findCentury(600);
  findCentury(1600);
  findCentury(1900);
  findCentury(1901);
  findCentury(2021);
}