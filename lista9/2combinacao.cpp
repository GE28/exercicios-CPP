#include <iostream>
using namespace std;

int fat(int n) {
  int resultado = 1;
  int i = 2;

  while (i <= n) {
    resultado = resultado * i;
    i++;
  }

  return resultado;
}

int comb(int n, int p) {
  if (p < n) {
    int fatN, fatP, fatNP;
    fatN = fat(n);
    fatP = fat(p);
    fatNP = fat((n - p));

    return (fatN / (fatNP * fatP));
  }

  return -1;
}

int main() {
  int n, p, fatorial;
  cout << "Digite o número de elementos: " << endl;
  cin >> n;

  cout << "Digite o número de posições: " << endl;
  cin >> p;

  fatorial = comb(n, p);
  if (fatorial > 0) {
    cout << "A combinação de " << n << " elementos " << p << " à " << p << " = "
         << fatorial;
  } else {
    cout << "O número de posições não pode ser maior que o número de elementos";
  }

  cout << endl;
  return 0;
}
