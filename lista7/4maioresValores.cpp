#include <iostream>
using namespace std;

#define TAMANHO 4

void preenchaMaximo(int matriz1[][TAMANHO], int matriz2[][TAMANHO],
                    int matrizRetorno[][TAMANHO]) {
  for (int i = 0; i < TAMANHO; i++) {
    for (int j = 0; j < TAMANHO; j++) {
      matriz1[i][j] > matriz2[i][j] ? matrizRetorno[i][j] = matriz1[i][j]
                                    : matrizRetorno[i][j] = matriz2[i][j];
    }
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
  int matriz1[][TAMANHO] = {
      {25, 18, 5, 4},
      {25, 3, 42, 12},
      {38, 33, 25, 4},
      {15, 28, 38, 2},
  };
  int matriz2[][TAMANHO] = {
      {13, 1, 26, 1},
      {22, 7, 18, 11},
      {27, 31, 36, 2},
      {31, 37, 38, 13},
  };

  int matrizFinal[][TAMANHO] = {{}, {}, {}, {}, {}};

  preenchaMaximo(matriz1, matriz2, matrizFinal);
  imprimaMatriz(matrizFinal);

  return 0;
}