#include "lista9.h"
#include <iostream>
using namespace std;

typedef unsigned int uint;

void divisibilidade(uint x, uint y) {
  cout << x;
  if (!divisivel(x, y))
    cout << " não";
  cout << " é divisível por " << y;
  cout << endl;
}

void combinacao(uint x, uint y) {
  if (y > x) {
    uint tmp = x;
    x = y;
    y = tmp;
  }

  uint resultado = comb(x, y);

  cout << "A combinação de " << x << " elementos tomados " << y << " à " << y
       << " = " << resultado << endl;
}

void primaridade(uint n) {
  if (primo(n)) {
    cout << n << " é um número primo";
  } else {
    cout << n << " não é um número primo";
  }
  cout << endl;
}

uint inteiro() {
  uint n;

  cout << "Digite um valor inteiro positivo: " << endl;
  cin >> n;
  return n;
}

int main() {
  uint entrada1 = inteiro(), entrada2 = inteiro();

  primaridade(entrada1);
  cout << "O fatorial de " << entrada1 << " é " << fat(entrada1) << endl;

  primaridade(entrada2);
  cout << "O fatorial de " << entrada2 << " é " << fat(entrada2) << endl;

  combinacao(entrada1, entrada2);
  divisibilidade(entrada1, entrada2);
  return 0;
}