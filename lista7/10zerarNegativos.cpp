#include <iostream>
using namespace std;

#define TAMANHO 6

void zereNegativos(int matriz[][TAMANHO]) {
  for (int i = 0; i < TAMANHO; i++) {
    for (int j = 0; j < TAMANHO; j++) {
      if (j == i || j == TAMANHO - 1 - i) {
        continue;
      }
      if (matriz[i][j] < 0) {
        matriz[i][j] = 0;
      }
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
  int matriz[][TAMANHO] = {
      {17, -6, -2, -1, -7, -1}, {-1, 16, -6, -9, -2, -4},
      {-5, -9, 11, -1, -3, -1}, {-6, -4, -3, 19, -6, -3},
      {-8, -7, -7, -7, 12, -2}, {-4, -9, -8, -3, -7, 15},
  };

  imprimaMatriz(matriz);
  zereNegativos(matriz);
  imprimaMatriz(matriz);
  return 0;
}