#include <iostream>
using namespace std;

#define TAMANHO 4

void troqueDirecao(int matriz[][TAMANHO]) {
  for (int i = 0; i < TAMANHO; i++) {
    int valorOriginal = matriz[i][3];
    matriz[i][3] = matriz[3][i];
    matriz[3][i] = valorOriginal;
  }
}

void imprimaMatriz(int matriz[][TAMANHO]) {
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
  int matriz[][TAMANHO] = {
      {13, 14, 15, 16}, {9, 10, 11, 12}, {5, 6, 7, 8}, {1, 2, 3, 4}};

  imprimaMatriz(matriz);
  troqueDirecao(matriz);
  imprimaMatriz(matriz);
  return 0;
}