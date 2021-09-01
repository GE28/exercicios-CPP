#include <iostream>
using namespace std;

int obterImpar(int posicao) {
  int impar = 1 + 2 * posicao;
  return impar * impar;
}

int somarImpares(int n) {
  int soma = 0;
  for (int i = 0; i <= n; i++) {
    soma += obterImpar(i);
  }

  if (soma > 0) {
    return soma;
  }
  return -1;
}

int main() {
  int resultado, n;
  cout << "Digite a quantidade de ímpares (a partir de 0): " << endl;
  cin >> n;

  resultado = somarImpares(n - 1);

  cout << "O resultado é: " << resultado << endl;
  return 0;
}
