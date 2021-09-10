#include <iostream>
using namespace std;

#define TAMANHO 6

void zereNegativos(int **matriz) {
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
  int **matriz = new int *[TAMANHO] { new int[TAMANHO]{17, -6, -2, -1, -7, -1},
                                      new int[TAMANHO]{-1, 16, -6, -9, -2, -4},
                                      new int[TAMANHO]{-5, -9, 11, -1, -3, -1},
                                      new int[TAMANHO]{-6, -4, -3, 19, -6, -3},
                                      new int[TAMANHO]{-8, -7, -7, -7, 12, -2},
                                      new int[TAMANHO]{-4, -9, -8, -3, -7, 15},
                                    };

  imprimaMatriz(matriz);
  zereNegativos(matriz);
  imprimaMatriz(matriz);

  for (int i = 0; i < TAMANHO; i++) {
    delete[] matriz[i];
  }
  delete[] matriz;
  return 0;
}