#include <iostream>
using namespace std;
typedef unsigned short ushort;

#define TAMANHO 40

void leiaVetor(int vetor[]) {
  for (int i = 0; i < TAMANHO; i++) {
    cout << "Digite um valor inteiro: ";
    cin >> vetor[i];
  }
}

void zereNegativos(int vetor[]) {
  for (int i = 0; i < TAMANHO; i++) {
    if (vetor[i] < 0) {
      vetor[i] = 0;
    }
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
  zereNegativos(vetor);
  imprimaVetor(vetor);
  return 0;
}