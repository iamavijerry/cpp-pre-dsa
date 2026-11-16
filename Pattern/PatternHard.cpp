#include <iostream>
using namespace std;

int main() {
  int n = 5;

  for (int i = 1; i <= n; i++) {
    for (int j = n; j >= i + 1; j--) {
      cout << " ";
    }
    for (int k = 1; k <= i; k++) {
      cout << "*";
    }
    cout << endl;
  }

  cout << "____________________" << endl;
  for (int i = 1; i <= n; i++) {
    for (int j = n; j >= i + 1; j--) {
      cout << " ";
    }
    for (int k = 1; k <= i; k++) {
      cout << i;
    }
    cout << endl;
  }
  cout << "____________________" << endl;
  for (int i = 1; i <= n; i++) {
    for (int j = n; j >= i + 1; j--) {
      cout << " ";
    }
    for (int k = 1; k <= i; k++) {
      cout << k;
    }
    cout << endl;
  }
  cout << "____________________" << endl;

  for (int i = 1; i <= n; i++) {
    for (int j = n; j >= i + 1; j--) {
      cout << " ";
    }
    char x = 'A';
    for (int k = 1; k <= i; k++) {
      cout << x;
      x++;
    }
    cout << endl;
  }
  cout << "____________________" << endl;
  for (int i = 1; i <= n; i++) {
    for (int j = n; j >= i + 1; j--) {
      cout << " ";
    }
    for (int k = i; k >= 1; k--) {
      cout << k;
    }
    cout << endl;
  }
  cout << "____________________" << endl;
  for (int i = 1; i <= n; i++) {
    for (int j = n; j >= i + 1; j--) {
      cout << " ";
    }

    for (int k = i; k >= 1; k--) {
      cout << "*";
    }

    for (int l = 1; l <= i - 1; l++) {
      cout << "*";
    }
    cout << endl;
  }
  cout << "____________________" << endl;
  for (int i = 1; i <= n; i++) {
    for (int j = n; j >= i + 1; j--) {
      cout << " ";
    }

    for (int k = 1; k <= i; k++) {
      cout << k;
    }

    for (int l = i - 1; l >= 1; l--) {
      cout << l;
    }
    cout << endl;
  }
  cout << "____________________" << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < (n - i) - 1; j++) {
      cout << " ";
    }

    for (int k = 0; k < i + 1; k++) {
      cout << k + 1;
    }

    for (int l = i; l > 0; l--) {
      cout << l;
    }

    cout << endl;
  }

  cout << "____________________" << endl;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i - 1; j++) {
      cout << " ";
    }

    for (int k = n; k >= i; k--) {
      cout << "*";
    }

    for (int l = n - 1; l >= i; l--) {
      cout << "*";
    }
    cout << endl;
  }
  cout << "____________________" << endl;
  for (int i = n; i >= 1; i--) {
    // space
    for (int j = 1; j <= n - i; j++) {
      cout << " ";
    }
    // star
    for (int k = 1; k <= 2 * i - 1; k++) {
      cout << "*";
    }

    cout << endl;
  }
  cout << "____________________" << endl;

  for (int row = n; row >= 1; row--) {
    // print *
    for (int star = 1; star <= row; star++) cout << "*";
    // print space
    for (int sp = 1; sp <= 2 * n - 2 * row; sp++) cout << " ";
    // print *
    for (int star = 1; star <= row; star++) cout << "*";

    cout << endl;
  }

  for (int row = 1; row <= n; row++) {
    // print *
    for (int star = 1; star <= row; star++) cout << "*";
    // print space
    for (int sp = 1; sp <= 2 * n - 2 * row; sp++) cout << " ";
    // print *
    for (int star = 1; star <= row; star++) cout << "*";

    cout << endl;
  }
  cout << "____________________" << endl;
  for (int i = 1; i <= n; i++) {
    // Print *
    for (int st = 1; st <= i; st++) {
      cout << "*";
    }
    // Print space
    for (int sp = 1; sp <= 2 * n - 2 * i; sp++) {
      cout << " ";
    }
    // Print star
    for (int st = 1; st <= i; st++) {
      cout << "*";
    }

    cout << endl;
  }

  for (int i = n - 1; i >= 1; i--) {
    // Print *
    for (int st = 1; st <= i; st++) {
      cout << "*";
    }
    // Print space
    for (int sp = 1; sp <= 2 * n - 2 * i; sp++) {
      cout << " ";
    }
    // Print star
    for (int st = 1; st <= i; st++) {
      cout << "*";
    }

    cout << endl;
  }

  cout << "____________________" << endl;
  for (int i = 1; i <= n; i++) {
    // print space
    for (int sp = n - 1; sp >= i; sp--) {
      cout << " ";
    }

    // print star
    for (int st = 1; st <= i; st++) {
      cout << " *";
    }
    cout << endl;
  }
   for (int i = n; i >= 1; i--) {
    // print space
    for (int sp = n - 1; sp >= i; sp--) {
      cout << " ";
    }

    // print star
    for (int st = 1; st <= i; st++) {
      cout << " *";
    }
    cout << endl;
  }
  cout << "____________________" << endl;
  cout << "____________________" << endl;
}