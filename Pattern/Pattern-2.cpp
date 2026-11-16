#include <iostream>
using namespace std;

int main() {
  int n = 5;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
  cout << "____________________" << endl;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << j << " ";
    }
    cout << endl;
  }
  cout << "____________________" << endl;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << i << " ";
    }
    cout << endl;
  }
  cout << "____________________" << endl;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << (i + 1) - j << " ";
    }
    cout << endl;
  }
  cout << "____________________" << endl;
  for (int i = 1; i <= n; i++) {
    char x = 'a' + i - 1;
    for (int j = 1; j <= i; j++) {
      cout << x << " ";
    }
    cout << endl;
  }
  cout << "____________________" << endl;
  for (int i = 1; i <= n; i++) {
    for (int j = n; j >= i; j--) {
      cout << "* ";
    }
    cout << endl;
  }
  cout << "____________________" << endl;
  for (int i = 1; i <= n; i++) {
    for (int j = n; j >= i; j--) {
      cout << n - j + 1 << " ";
    }
    cout << endl;
  }
  cout << "____________________" << endl;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << n - (j - 1) << " ";
    }
    cout << endl;
  }
  cout << "____________________" << endl;

  cout << "____________________" << endl;


}