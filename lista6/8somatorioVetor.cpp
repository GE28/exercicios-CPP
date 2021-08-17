#include <iostream>
using namespace std;

#define TAMANHO 40

void leiaVetor(int vetor[]) {
  for (int i = 0; i < TAMANHO; i++) {
    cout << "Digite um valor inteiro: ";
    cin >> vetor[i];
  }
}

void incrementeVetor(int vetor[]) {
  for (int i = 1; i < TAMANHO; i++) {
    vetor[i] += vetor[i - 1];
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
  incrementeVetor(vetor);
  imprimaVetor(vetor);
  return 0;
}