#include <iostream>
using namespace std;

#define TAMANHO 20

void leiaVetor(int vetor[]) {
  for (int i = 0; i < TAMANHO; i++) {
    cout << "Informe um valor inteiro: ";
    cin >> vetor[i];
  }
}

void intercaleVetores(int vetorPar[], int vetorImpar[], int novoVetor[]) {
  for (int i = 0; i < TAMANHO - 1; i += 2) {
    novoVetor[i] = vetorImpar[i];
    novoVetor[i + 1] = vetorPar[i + 1];
  }
}

void imprimaVetor(int vetor[]) {
  cout << '[' << vetor[0];
  for (int i = 1; i < TAMANHO - 1; i++) {
    cout << ", " << vetor[i];
  }
  cout << ", " << vetor[TAMANHO - 1] << "]" << endl;
}

int main() {
  int *vetorPar = new int[TAMANHO], *vetorImpar = new int[TAMANHO],
      *novoVetor = new int[TAMANHO];

  leiaVetor(vetorPar);
  leiaVetor(vetorImpar);

  intercaleVetores(vetorPar, vetorImpar, novoVetor);
  imprimaVetor(novoVetor);

  delete[] vetorPar, vetorImpar, novoVetor;
  return 0;
}