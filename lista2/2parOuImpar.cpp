#include <iostream>
using namespace std;

int main() {
  cout << "Digite um valor inteiro: " << endl;
  int parOuImpar;
  cin >> parOuImpar;

  cout << "Você digitou um número ";
  if (parOuImpar % 2 == 1) {
    cout << "ímpar" << endl;
  } else {
    cout << "par" << endl;
  }

  return 0;
}