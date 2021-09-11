#include <iostream>
using namespace std;

typedef unsigned int uint;

bool divisivel(uint a, uint b) { return a % b == 0; }

bool primo(uint n) {
  uint metade = n >> 1;
  for (uint i = metade; i > 1; i--) {
    if (divisivel(n, i)) {
      return false;
    }
  }

  return true;
}

uint fat(uint n) {
  uint resultado = 1;
  uint i = 2;

  while (i <= n) {
    resultado = resultado * i;
    i++;
  }

  return resultado;
}

void comb(uint x, uint y) {
  uint resultado = 1;

  if (y > x) {
    uint tmp = x;
    x = y;
    y = tmp;
  }

  int fatN, fatP, fatNP;
  fatN = fat(x);
  fatP = fat(y);
  fatNP = fat(x - y);

  resultado = (fatN / (fatNP * fatP));

  cout << "A combinação de " << x << " elementos " << y << " à " << y << " = "
       << resultado << endl;
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

  comb(entrada1, entrada2);

  cout << entrada1;
  if (!divisivel(entrada1, entrada2))
    cout << " não";
  cout << " é divisível por " << entrada2;

  cout << endl;
  return 0;
}