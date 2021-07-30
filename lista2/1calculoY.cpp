#include <iostream>
using namespace std;

int main() {
  cout << "Informe o valor de x: " << endl;
  double x;
  cin >> x;

  double y;

  if (x > 0) {
    y = (10 / x) + x * x;
  } else {
    y = x * x;
  }

  cout << y << endl;

  return 0;
}