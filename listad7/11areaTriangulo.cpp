#include <iostream>
using namespace std;

#define LINHAS 2
#define COLUNAS 50

void calculeAreas(double triangulos[LINHAS][COLUNAS], double areas[]) {
  for (int i = 0; i < COLUNAS; i++) {
    areas[i] = (triangulos[0][i] * triangulos[1][i]) / 2;
    cout << "A área do " << i + 1 << "º triângulo é " << areas[i] << endl;
  }
}

void imprimaMatriz(double matriz[LINHAS][COLUNAS]) {
  int j = 0;

  cout << "[" << endl;
  for (int i = 0; i < LINHAS; i++) {
    j = 0;
    cout << "[" << matriz[i][j] << ", ";
    for (j = 1; j < COLUNAS - 1; j++) {
      cout << matriz[i][j] << ", ";
    }
    cout << matriz[i][j] << "]," << endl;
  }
  cout << "]" << endl;
}

int main() {
  double matriz[LINHAS][COLUNAS] = {
      {12, 5,  6, 7, 6, 9, 8,  3, 6,  10, 2, 7, 6, 9, 2,  5, 9,
       5,  9,  5, 9, 6, 3, 10, 7, 10, 4,  5, 1, 9, 6, 6,  5, 1,
       4,  10, 9, 1, 2, 7, 3,  6, 3,  8,  6, 4, 5, 5, 10, 3},
      {23, 8, 10, 5, 8,  7, 4, 3, 1, 4, 3, 8, 2,  7,  1, 5, 6,
       1,  8, 10, 7, 10, 7, 9, 9, 2, 5, 3, 8, 4,  7,  8, 2, 9,
       2,  1, 5,  5, 3,  7, 1, 5, 4, 4, 3, 4, 10, 10, 7, 7}};
  double areas[COLUNAS] = {};

  imprimaMatriz(matriz);
  calculeAreas(matriz, areas);
  return 0;
}