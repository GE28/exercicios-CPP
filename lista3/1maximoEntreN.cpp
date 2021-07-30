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

  double maximo = 0;
  for (int i = 0; i < quantidadeDeNumeros; i++) {
    double x = recebaReal();

    if (x > maximo) {
      maximo = x;
    }
  }

  cout << "O maior número informado foi: " << maximo << endl;

  return 0;
}