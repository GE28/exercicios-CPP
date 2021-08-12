#include <iostream>
using namespace std;

int selecionaMaior(int a, int b) {
  if (a > b) {
    return a;
  }
  return b;
}

int selecionaMenor(int a, int b) {
  if (a > b) {
    return b;
  }
  return a;
}

int main() {
  int primeiroInt1, segundoInt1, primeiroInt2, segundoInt2;
  int primeiroFinal, segundoFinal;

  cout << "Informe o primeiro valor do primeiro intervalo: ";
  cin >> primeiroInt1;

  cout << "Informe o segundo valor do primeiro intervalo: ";
  cin >> segundoInt1;

  cout << "Informe o primeiro valor do segundo intervalo: ";
  cin >> primeiroInt2;

  cout << "Informe o segundo valor do segundo intervalo: ";
  cin >> segundoInt2;

  primeiroFinal = selecionaMaior(primeiroInt1, primeiroInt2);
  segundoFinal = selecionaMenor(segundoInt1, segundoInt2);

  cout << "A interseção de dois intervalos é "
       << "[" << primeiroFinal << "," << segundoFinal << "]" << endl;

  return 0;
}