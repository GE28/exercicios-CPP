#include <iostream>
using namespace std;

#define TAMANHO 100

int main() {
  int numeros[TAMANHO] = {}, soma = 0, media;
  for (int i = 0; i < TAMANHO; i++) {
    int entrada;
    cout << "Digite um número: ";
    cin >> entrada;

    numeros[i] = entrada;
    soma += entrada;
  }

  media = soma / TAMANHO;

  for (int i = 0; i < TAMANHO; i++) {
    if (numeros[i] > media) {
      cout << numeros[i] << " ";
    }
  }

  cout << endl;
  return 0;
}
