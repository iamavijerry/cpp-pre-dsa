// Take a month number (1–12) and print the number of days in that month (ignore leap years).

#include <iostream>
using namespace std;

void months(int n)
{

  switch (n) {
  case 1:
    cout << "January - 31 days" << endl;
    break;
  case 2:
    cout << "February - 28 days" << endl; // (29 in leap year)
    break;
  case 3:
    cout << "March - 31 days" << endl;
    break;
  case 4:
    cout << "April - 30 days" << endl;
    break;
  case 5:
    cout << "May - 31 days" << endl;
    break;
  case 6:
    cout << "June - 30 days" << endl;
    break;
  case 7:
    cout << "July - 31 days" << endl;
    break;
  case 8:
    cout << "August - 31 days" << endl;
    break;
  case 9:
    cout << "September - 30 days" << endl;
    break;
  case 10:
    cout << "October - 31 days" << endl;
    break;
  case 11:
    cout << "November - 30 days" << endl;
    break;
  case 12:
    cout << "December - 31 days" << endl;
    break;
  default:
    cout << "Invalid Case.";
  }
}

int main() {
  months(6);
}