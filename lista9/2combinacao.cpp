#include "lista9.h"
#include <iostream>
using namespace std;

int main() {
  int n, p, fatorial;
  cout << "Digite o número de elementos: " << endl;
  cin >> n;

  cout << "Digite o número de posições: " << endl;
  cin >> p;

  fatorial = comb(n, p);
  if (fatorial >= 0) {
    cout << "A combinação de " << n << " elementos tomados " << p << " à " << p
         << " = " << fatorial;
  } else {
    cout << "O número de posições não pode ser maior que o número de elementos";
  }

  cout << endl;
  return 0;
}
