#include <iostream>
using namespace std;

typedef unsigned int uint;

int main() {
  cout << "Digite um valor inteiro positivo: " << endl;
  uint entrada;
  cin >> entrada;

  cout << "Os divisores do número são: " << entrada << ", ";

  uint pseudoMetade = entrada >> 1;
  for (uint i = pseudoMetade; i >= 2; i--) {
    if (entrada % i == 0) {
      cout << i << ", ";
    }
  }

  cout << "1" << endl;

  return 0;
}