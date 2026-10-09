// 06. Take three numbers and check if they are in geometric progression.

#include <iostream>
using namespace std;

void gp(double a, double b, double c) {
  if (a == 0 || b == 0) {
    cout << "Cannot Check (Zero Present).";
    return;
  }

  (b * b == a * c) ? cout << "Geometric Progression\n"
                   : cout << "Not Geometric Progression\n";
}

void geometricProgression(double geoP[], int size) {
  if (size <= 2) {
    cout << "Too Less Elements.";
    return;
  }

  double commonRatio = geoP[1] / geoP[0];
  cout << commonRatio << " \n";

  for (int i = 2; i < size; i++) {
    if(geoP[i-1]==0){
      cout << "Not GP (Zero in middle).";
      return;
    }

    double currentRation = geoP[i] / geoP[i-1];
    // cout << currentRation << "\n";

    if (currentRation != commonRatio) {
      cout << "Not GP";
      return;
    }
  }
  cout << "GP";
}

int main() {
  gp(2,4,8);
  gp(2,4,4);

  double gp[] = {2, 4, 8, 16, 32, 64};
  double gp2[] = {2, 4, 8, 16, 732, 64};

  int size = sizeof(gp) / sizeof(gp[0]);
  int size2 = sizeof(gp2) / sizeof(gp2[0]);
  
  geometricProgression(gp, size);
  geometricProgression(gp2, size);
}