#include "lista9.h"
#include <iostream>
using namespace std;

typedef unsigned int uint;

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