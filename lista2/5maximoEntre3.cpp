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
  double z = recebaReal();

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