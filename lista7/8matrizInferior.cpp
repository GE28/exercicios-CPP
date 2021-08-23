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
  int matriz[][TAMANHO] = {{7, 7, 1, 2, 2, 8, 6, 5}, {5, 7, 2, 4, 1, 2, 3, 7},
                           {3, 1, 1, 4, 4, 3, 6, 4}, {9, 6, 2, 3, 6, 6, 2, 3},
                           {3, 2, 3, 2, 9, 8, 7, 2}, {6, 6, 3, 6, 7, 6, 1, 1},
                           {4, 1, 2, 5, 3, 7, 8, 3}, {1, 9, 3, 4, 4, 4, 5, 4}};

  inferiorizeMatriz(matriz);
  imprimaMatriz(matriz);
  return 0;
}