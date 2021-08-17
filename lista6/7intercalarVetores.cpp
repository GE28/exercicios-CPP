#include <iostream>
using namespace std;
typedef unsigned short ushort;

#define TAMANHO 20

void leiaVetor(int vetor[]) {
  for (int i = 0; i < TAMANHO; i++) {
    cout << "Digite um valor inteiro: ";
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
  int vetorPar[TAMANHO], vetorImpar[TAMANHO], novoVetor[TAMANHO];
  short posicao;

  leiaVetor(vetorPar);
  leiaVetor(vetorImpar);

  intercaleVetores(vetorPar, vetorImpar, novoVetor);
  imprimaVetor(novoVetor);
  return 0;
}