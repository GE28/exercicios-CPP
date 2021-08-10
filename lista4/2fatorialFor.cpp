#include <iostream>
using namespace std;

typedef unsigned long ulong;

int main() {
  int n;
  ulong fat;

  cout << "Informe um número para saber o seu fatorial" << endl;
  cin >> n;

  if (n < 0) {
    cout << "Número inválido, não existe fatorial de número negativo.";
  } else {
    for (fat = 1; n > 1; n = n - 1) {
      fat = fat * n;
    }

    cout << "Fatorial calculado: " << fat;
  }
  return 0;
}