#include <iostream>
using namespace std;

int main() {
#define TAMANHO 10
  int vetor[TAMANHO];

  for (int i = 0; i < TAMANHO; i++) {
    vetor[i] = 1 + 2 * i;
  }

  cout << '[' << vetor[0];
  for (int i = 1; i < TAMANHO - 1; i++) {
    cout << ", " << vetor[i];
  }
  cout << ", " << vetor[TAMANHO - 1] << "]" << endl;
  return 0;
}