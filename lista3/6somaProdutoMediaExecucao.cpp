#include <iostream>
using namespace std;

double obtenhaReal() {
  cout << "Digite um número real: " << endl;

  double n;
  cin >> n;
  return n;
}

int main() {
  int quantidadeDeNumeros = 0;
  double x = 1, soma = 0, produto = 1;

  x = obtenhaReal();
  while (x != 0) {
    quantidadeDeNumeros++;

    soma += x;
    produto *= x;

    cout << "A soma dos números informados é: " << soma << endl;
    cout << "O produto dos números informados é: " << produto << endl;
    cout << "A média dos números informados é: " << (soma / quantidadeDeNumeros)
         << endl;

    x = obtenhaReal();
  }

  return 0;
}