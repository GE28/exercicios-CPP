#include <iostream>
using namespace std;

#define TAMANHO 4

void troqueDirecao(int matriz[][TAMANHO]) {
  for (int i = 0; i < TAMANHO - 1; i++) {
    int ultimo = TAMANHO - 1;
    int valorOriginal = matriz[i][ultimo];
    matriz[i][ultimo] = matriz[ultimo][i];
    matriz[ultimo][i] = valorOriginal;
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