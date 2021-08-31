#include <iostream>
using namespace std;

int obterValor() {
  int n;
  cin >> n;
  return n;
}

int obterFatorial(int n) {
  int resultado = 1;
  int i = 2;

  while (i <= n) {
    resultado = resultado * i;
    i++;
  }

  return resultado;
}

int combinar(int n, int p) {
  if (p < n) {
    int fatN, fatP, fatNP;
    fatN = obterFatorial(n);
    fatP = obterFatorial(p);
    fatNP = obterFatorial((n - p));

    return (fatN / (fatNP * fatP));
  }

  return -1;
}

int main() {
  int n, p, fat;
  cout << "Digite o número de elementos: " << endl;
  n = obterValor();

  cout << "Digite o número de posições: " << endl;
  p = obterValor();

  fat = combinar(n, p);
  if (fat > 0) {
    cout << "A combinação de " << n << " elementos " << p << " à " << p << " = "
         << fat;
  } else {
    cout << "O número de posições não pode ser maior que o número de elementos";
  }

  cout << endl;
  return 0;
}
