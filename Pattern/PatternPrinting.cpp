#include <iostream>
using namespace std;

int main() {
  int n = 5;
  for (int i = 0; i < n; i++) {
    for (int i = 0; i < n; i++) {
      cout << "* ";
    }
    cout << endl;
  }
  cout << "____________________" << endl;

  for (int i = 0; i < n; i++) {
    for (int i = 0; i < n; i++) {
      cout << n + 5 << " ";
    }
    cout << endl;
  }
  cout << "____________________" << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << i + 1 << ' ';
    }
    cout << endl;
  }
  cout << "____________________" << endl;
  for (int i = 0; i < n; i++) {
    for (int j = n; j > 0; j--) {
      cout << j << ' ';
    }
    cout << endl;
  }

  cout << "____________________" << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << (j + 1) * (j + 1) << "  ";
    }
    cout << endl;
  }
  cout << "____________________" << endl;
  for (int i = 0; i < n; i++) {
    char ch = 'a' + i;
    for (int j = 0; j < n; j++) {
      cout << ch << ' ';
    }
    cout << endl;
  }
  cout << "____________________" << endl;
  for (int i = 0; i < n; i++) {
    char a = 'a';
    for (int j = 0; j < n; j++) {
      cout << char(a + j) << ' ';
      // a++ ;
    }
    cout << endl;
  }
  cout << "____________________" << endl;
  int count = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << count << ' ';
      count++;
    }
    cout << endl;
  }

  cout << "____________________" << endl;
  // int count = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << (i*5) + j+1 << ' ';
    }
    cout << endl;
  }
  cout << "____________________" << endl;

}