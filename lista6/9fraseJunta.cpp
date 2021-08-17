#include <iostream>
using namespace std;

void retireEspacos(char vetor[], int tamanho) {
  for (int i = 1; i < tamanho; i++) {
    if (vetor[i] == ' ') {
      for (int j = i; j < tamanho - 1; j++) {
        vetor[j] = vetor[j + 1];
      }
    }
  }
}

void imprimaFrase(char vetor[], int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    cout << vetor[i];
  }

  cout << endl;
}

int main() {
  char vetor[] = "BCC CEFET-RJ 2021.1!";
  int tamanho = *(&vetor + 1) - vetor;

  retireEspacos(vetor, tamanho);
  imprimaFrase(vetor, tamanho);
  return 0;
}