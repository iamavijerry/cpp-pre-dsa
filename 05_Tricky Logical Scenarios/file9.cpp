// 9. Take two dates (day and month) and determine which one comes first in the calendar.
#include <iostream>
using namespace std;

void whichDateComeFirst(int d1, int m1, int d2, int m2) {
  if ((d1 > 31 || d2 > 31) || (m1 > 12 || m2 > 12)) {
    return;
  }

  if (m1 != m2) {
    if (m1 < m2)
      cout << d2 << "/" << m2 << " and " << d1 << "/" << m1 << " But " << d1 << "/" << m1 << " come first." << endl;
    else
      cout << d1 << "/" << m1 << " and " << d2 << "/" << m2 << " But " << d2 << "/" << m2 << " come first." << endl;
  } else {
    if (d1 != d2) {
      if (d1 < d2)
        cout << d2 << "/" << m2 << " and " << d1 << "/" << m1 << " But " << d1 << "/" << m1 << " come first." << endl;
      else
        cout << d1 << "/" << m1 << " and " << d2 << "/" << m2 << " But " << d2 << "/" << m2 << " come first." << endl;
    } else {
      cout << "Both are same date." << endl;
    }
  }
}

int main() {
  whichDateComeFirst(2, 4, 5, 6);
  whichDateComeFirst(5, 4, 5, 6);
}