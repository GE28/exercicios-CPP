#include <iostream>
using namespace std;

double recebaReal() {
  cout << "Informe um número real: " << endl;

  double n;
  cin >> n;
  return n;
}

int main() {
  cout << "Quantos números você é capaz de digitar?" << endl;
  int quantidadeDeNumeros;
  cin >> quantidadeDeNumeros;

  double soma = 0, produto = 1;
  for (int i = 0; i < quantidadeDeNumeros; i++) {
    double x = recebaReal();

    soma += x;    // soma = soma + soma
    produto *= x; // produto = produto * produto
  }

  cout << "A soma dos números informados é: " << soma << endl;
  cout << "O produto dos números informados é: " << produto << endl;
  cout << "A média dos números informados é: " << (soma / quantidadeDeNumeros)
       << endl;

  return 0;
}