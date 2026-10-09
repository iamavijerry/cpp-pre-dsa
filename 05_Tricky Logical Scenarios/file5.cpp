// 5. Take three numbers and check if they are in arithmetic progression

#include <iostream>
using namespace std;

void ap(int a, int b, int c) {
  (b - a == c - b) ? cout << "AP\n" : cout << "Not AP\n";
}

void apInArray(int arr[], int size) {
  if (size <= 2) {
    cout << "To few elements.";
    return;
  }

  int commonDiff = arr[1] - arr[0];
  for (int i = 2; i < size; i++) {
    if (arr[i] - arr[i - 1] != commonDiff) {
      cout << "AP nahi hai  \n";
      return;
    }
  }
  cout << "AP hai \n";
}

int main() {
  ap(2, 3, 4);
  ap(2, 3, 9);
  int ab[] = {2, 4, 6, 8, 10, 12, 14, 16, 18};
  int size = sizeof(ab) / sizeof(ab[0]);
  apInArray(ab, size);
  return 0;
}