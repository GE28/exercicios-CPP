#include <iostream>
using namespace std;

int main() {
  cout << "Digite um valor inteiro positivo: " << endl;
  int x;
  cin >> x;

  int menorDivisor = 1, pseudoMetade = x >> 1;
  for (int i = pseudoMetade; i >= 2; i--) {
    if (x % i == 0) {
      menorDivisor = i;
    }
  }

  if (menorDivisor == 1) {
    cout << x << " é um número primo";
  } else {
    cout << "O menor divisor de " << x << " é " << menorDivisor;
  }

  return 0;
}