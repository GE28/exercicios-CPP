#include <iostream>
using namespace std;

#define TAMANHO 5

void preenchaDiagonal(int **matriz) {
  for (int i = 0; i < TAMANHO; i++) {
    matriz[i][i] = 1;
  }
}

void imprimaMatriz(int **matriz) {
  int j = 0;

  cout << "[" << endl;
  for (int i = 0; i < TAMANHO; i++) {
    j = 0;
    cout << "[" << matriz[i][j] << ", ";
    for (j = 1; j < TAMANHO - 1; j++) {
      cout << matriz[i][j] << ", ";
    }
    cout << matriz[i][j] << "]," << endl;
  }
  cout << "]" << endl;
}

int main() {
  int **matriz = new int *[TAMANHO];
  for (int i = 0; i < TAMANHO; i++) {
    matriz[i] = new int[TAMANHO]{};
  }

  preenchaDiagonal(matriz);
  imprimaMatriz(matriz);

  for (int i = 0; i < TAMANHO; i++) {
    matriz[i] = new int[TAMANHO]{};
  }
  delete[] matriz;
  return 0;
}