#include <iostream>
using namespace std;

int conteDigitos(int n) {
  int digitosRestantes = n, numeroDeDigitos = 0;
  do {
    digitosRestantes /= 10;
    numeroDeDigitos++;
  } while (digitosRestantes != 0);

  return numeroDeDigitos;
}

void imprimaEspacado(int n) {
  int numeroDeDigitos = conteDigitos(n);
  int numeroDeEspacos = 4 - numeroDeDigitos;

  cout << n;

  while (numeroDeEspacos > 0) {
    cout << " ";
    numeroDeEspacos--;
  }
}

int main() {
  int produto;

  cout << "X*Y 0   1   2   3   4   5   6   7   8   9   10 \n";
  cout << "_______________________________________________\n";

  for (int x = 0; x <= 10; x++) {
    cout << "    ";

    for (int y = 0; y <= 10; y++) {
      produto = x * y;
      imprimaEspacado(produto);
    }
    cout << endl;
  }
  return 0;
}