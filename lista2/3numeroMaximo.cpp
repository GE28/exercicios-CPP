#include <iostream>
using namespace std;

double obtenhaReal() {
  cout << "Informe um número real: " << endl;

  double n;
  cin >> n;
  return n;
}

int main() {
  double x = obtenhaReal();
  double y = obtenhaReal();

  cout << "O maior número informado foi ";
  if (x > y) {
    cout << x << endl;
  } else {
    cout << y << endl;
  }

  return 0;
}