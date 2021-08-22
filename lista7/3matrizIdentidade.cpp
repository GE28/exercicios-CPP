#include <iostream>
using namespace std;

#define TAMANHO 5

int preenchaDiagonal(int matriz[][TAMANHO]) {
  int maximo = matriz[0][0], x = 1, y = 1;
  for (int i = 0; i < TAMANHO; i++) {
    matriz[i][i] = 1;
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
  int matriz[][TAMANHO] = {{}, {}, {}, {}, {}};
  preenchaDiagonal(matriz);
  imprimaMatriz(matriz);

  return 0;
}