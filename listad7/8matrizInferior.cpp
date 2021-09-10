#include <iostream>
using namespace std;

#define TAMANHO 8

void inferiorizeMatriz(int matriz[][TAMANHO]) {
  for (int i = 0; i < TAMANHO; i++) {
    for (int j = TAMANHO - 1; j > i; j--) {
      matriz[i][j] = 0;
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
  int **matriz = new int[TAMANHO];
  matriz[0] = new int[TAMANHO]{7, 7, 1, 2, 2, 8, 6, 5};
  matriz[1] = new int[TAMANHO]{5, 7, 2, 4, 1, 2, 3, 7};
  matriz[2] = new int[TAMANHO]{3, 1, 1, 4, 4, 3, 6, 4};
  matriz[3] = new int[TAMANHO]{9, 6, 2, 3, 6, 6, 2, 3};
  matriz[4] = new int[TAMANHO]{3, 2, 3, 2, 9, 8, 7, 2};
  matriz[5] = new int[TAMANHO]{6, 6, 3, 6, 7, 6, 1, 1};
  matriz[6] = new int[TAMANHO]{4, 1, 2, 5, 3, 7, 8, 3};
  matriz[7] = new int[TAMANHO]{1, 9, 3, 4, 4, 4, 5, 4};

  inferiorizeMatriz(matriz);
  imprimaMatriz(matriz);

  for (int i = 0; i < TAMANHO; i++) {
    delete[] matriz[i];
  }
  delete[] matriz;
  return 0;
}