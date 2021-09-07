#include <iostream>
using namespace std;

#define TAMANHO 40

void leiaVetor(int vetor[]) {
  for (int i = 0; i < TAMANHO; i++) {
    cout << "Informe um valor inteiro: ";
    cin >> vetor[i];
  }
}

int contePares(int vetor[]) {
  int pares = 0;
  for (int i = 0; i < TAMANHO; i++) {
    if (vetor[i] % 2 == 0) {
      pares++;
    }
  }

  return pares;
}

int main() {
  int *vetor = new int[TAMANHO];

  leiaVetor(vetor);
  cout << "Há " << contePares(vetor) << " valor(es) par(es) no vetor lido."
       << endl;

  delete[] vetor;
  return 0;
}