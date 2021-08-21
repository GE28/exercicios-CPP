#include <iostream>
using namespace std;

#define TAMANHO 50

void leiaVetor(int vetor[]) {
  for (int i = 0; i < TAMANHO; i++) {
    cout << "Informe um valor inteiro: ";
    cin >> vetor[i];
  }
}

void imprimaVetor(int vetor[]) {
  cout << '[' << vetor[0];
  for (int i = 1; i < TAMANHO - 1; i++) {
    cout << ", " << vetor[i];
  }
  cout << ", " << vetor[TAMANHO - 1] << "]" << endl;
}

void compacteVetor(int vetor[]) {
  short casasVazias = 0;
  int j = 0;
  for (int i = 0; i < TAMANHO - casasVazias; i++) {
    while (vetor[i] == 0) {
      for (j = i; j < TAMANHO - 1; j++) {
        int jOriginal = vetor[j];
        vetor[j] = vetor[j + 1];
        vetor[j + 1] = jOriginal;
      }

      casasVazias += 1;
      i -= 1;
    }
  }
}

int main() {
  int vetor[TAMANHO];

  leiaVetor(vetor);

  cout << "Não compactado: ";
  imprimaVetor(vetor);

  cout << "Compactado:     ";
  compacteVetor(vetor);
  imprimaVetor(vetor);

  return 0;
}