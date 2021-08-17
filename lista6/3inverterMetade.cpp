#include <iostream>
using namespace std;
typedef unsigned short ushort;

#define TAMANHO 16

void leiaVetor(int vetor[]) {
  for (int i = 0; i < TAMANHO; i++) {
    cout << "Informe um valor real: ";
    cin >> vetor[i];
  }
}

void invertaMetadeVetor(int vetor[]) {
  ushort metade = TAMANHO >> 1;
  for (int i = 0; i < metade; i++) {
    int c = vetor[metade + i];
    vetor[metade + i] = vetor[i];
    vetor[i] = c;
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
  int vetor[TAMANHO];

  leiaVetor(vetor);
  invertaMetadeVetor(vetor);
  imprimaVetor(vetor);

  return 0;
}