#include <iostream>
using namespace std;

void retireEspacos(char vetor[], int tamanho) {
  short casasVazias = 0;
  int j = 0;
  for (int i = 0; i < tamanho - casasVazias; i++) {
    while (vetor[i] == ' ') {
      for (j = i; j < tamanho - 1; j++) {
        int jOriginal = vetor[j];
        vetor[j] = vetor[j + 1];
        vetor[j + 1] = jOriginal;
      }

      casasVazias += 1;
      i -= 1;
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
  // Alocação dinâmica impossível
  char vetor[] = "    BCC      ||CEFET-RJ  ||2021.1!";
  int tamanho = *(&vetor + 1) - vetor;

  retireEspacos(vetor, tamanho);
  imprimaFrase(vetor, tamanho);
  return 0;
}