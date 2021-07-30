#include <iostream>
using namespace std;

double recebaReal() {
  cout << "Informe um número real: " << endl;

  double n;
  cin >> n;
  return n;
}

int main() {
  double x = recebaReal();
  double y = recebaReal();

  cout << "O maior número informado foi ";
  if (x > y) {
    cout << x << endl;
  } else {
    cout << y << endl;
  }

  return 0;
}