#include <iostream>
using namespace std;
typedef unsigned short ushort;

#define TAMANHO 12

ushort obtenhaPosicao() {
  ushort p;
  cout << "Informe um número (de 1 a " << TAMANHO << "): ";
  cin >> p;

  if (p > TAMANHO) {
    p = p % TAMANHO + 1;
  }

  return p;
}

void leiaVetor(int vetor[]) {
  for (int i = 0; i < TAMANHO; i++) {
    cout << "Informe um valor inteiro: ";
    cin >> vetor[i];
  }
}

int main() {
  int *vetor = new int[TAMANHO], entrada1, entrada2;
  leiaVetor(vetor);

  entrada1 = obtenhaPosicao();
  entrada2 = obtenhaPosicao();

  cout << "A soma do " << entrada1-- << "º e " << entrada2--
       << "º valores inseridos é " << vetor[entrada1] + vetor[entrada2] << endl;

  delete[] vetor;
  return 0;
}