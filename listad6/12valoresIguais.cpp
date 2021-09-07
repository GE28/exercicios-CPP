#include <iostream>
using namespace std;

#define TAMANHO 10

void leiaVetor(int vetor[]) {
  for (int i = 0; i < TAMANHO; i++) {
    cout << "Informe um valor inteiro: ";
    cin >> vetor[i];
  }
}

void encontreRepetidos(int valores[]) {
  for (int i = 0; i < TAMANHO; i++) {
    for (int j = i + 1; j < TAMANHO; j++) {
      if (valores[i] == valores[j]) {
        cout << "Valor repetido encontrado (" << valores[i] << ") nas posições "
             << i + 1 << " e " << j + 1 << endl;
      }
    }
  }
}

int main() {
  int *vetor = new int[TAMANHO];

  leiaVetor(vetor);
  encontreRepetidos(vetor);

  delete[] vetor;
  return 0;
}