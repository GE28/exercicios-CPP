#include <iostream>
using namespace std;

#define TAMANHO 3

void leiaVetor(double vetor[], int rotulo) {
  for (int i = 0; i < TAMANHO; i++) {
    cout << "(VETOR " << rotulo
         << ") "
            "Digite um valor real: ";
    cin >> vetor[i];
  }
}

void dividaVetor(double vetor[]) {
  for (int i = 0; i < TAMANHO; i++) {
    vetor[i] /= 3;
  }
}

void imprimaVetor(double vetor[]) {
  cout << '[' << vetor[0];
  for (int i = 1; i < TAMANHO - 1; i++) {
    cout << ", " << vetor[i];
  }
  cout << ", " << vetor[TAMANHO - 1] << "]" << endl;
}

int main() {
  double *vetor1 = new double[TAMANHO], *vetor2 = new double[TAMANHO],
         *vetor3 = new double[TAMANHO];

  leiaVetor(vetor1, 1);
  leiaVetor(vetor2, 2);
  leiaVetor(vetor3, 3);

  dividaVetor(vetor1);
  dividaVetor(vetor2);
  dividaVetor(vetor3);

  cout << "Vetor 1: ";
  imprimaVetor(vetor1);

  cout << "Vetor 2: ";
  imprimaVetor(vetor2);

  cout << "Vetor 3: ";
  imprimaVetor(vetor3);

  delete[] vetor1, vetor2, vetor3;
  return 0;
}