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

int main() {
  uint entrada;
  cout << "Digite um valor inteiro positivo: " << endl;
  cin >> entrada;

  if (primo(entrada)) {
    cout << entrada << " é um número primo";
  } else {
    cout << entrada << " não é um número primo";
  }

  cout << endl;
  return 0;
}