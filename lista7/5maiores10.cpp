#include <iostream>
using namespace std;

#define TAMANHO 6

void conteMaiores(int matriz[][TAMANHO]) {
  int maiores = 0;
  for (int i = 0; i < TAMANHO; i++) {
    for (int j = 0; j < TAMANHO; j++) {
      if (matriz[i][j] > 10) {
        maiores += 1;
      }
    }
  }

  cout << "Na matriz existe(m) " << maiores << " valor(es) maior(es) que 10"
       << endl;
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
  int matriz[][TAMANHO] = {{12, 13, 9, 8, 15, 2}, {15, 5, 7, 13, 5, 3},
                           {8, 6, 15, 2, 4, 10},  {19, 12, 7, 2, 8, 9},
                           {15, 5, 10, 9, 2, 1},  {11, 13, 5, 12, 12, 11}};

  conteMaiores(matriz);

  return 0;
}