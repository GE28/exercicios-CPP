#include <iostream>
using namespace std;

typedef unsigned long ulong;

long calculeFatorial(int x) {
  int contador = x;
  ulong resultado = 1;

  do {
    resultado *= contador--;
  } while (contador > 1);

  return resultado;
}

int main() {
  cout << "Informe um valor inteiro positivo: " << endl;
  int x;

  cin >> x;
  if (x < 0) {
    x = -x;
  }

  cout << "O fatorial de " << x++ << " é " << calculeFatorial(x) / x << endl;

  return 0;
}