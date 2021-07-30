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
  double z = obtenhaReal();

  cout << "O maior número informado foi ";

  double maximo = x;
  if (y > maximo) {
    maximo = y;
  }
  if (z > maximo) {
    maximo = z;
  }
  cout << maximo << endl;

  return 0;
}