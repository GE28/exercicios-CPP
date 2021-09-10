#include <iostream>
using namespace std;

#define TAMANHO 8

void encontreMaior(int **matriz) {
  int maximo = matriz[0][0];
  for (int i = 0; i < TAMANHO; i++) {
    if (matriz[i][i] > maximo) {
      maximo = matriz[i][i];
    }
  }

  cout << "O maior valor encontrado na diagonal principal foi " << maximo
       << endl;
}

void someDiagonal(int **matriz) {
  int soma = 0;
  for (int i = 0; i < TAMANHO; i++) {
    int j = TAMANHO - 1 - i;
    soma += matriz[i][j];
  }

  cout << "A soma dos valores encontrados na diagonal secundária foi " << soma
       << endl;
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
  int **matriz = new int *[TAMANHO] { new int[TAMANHO]{7, 7, 1, 2, 2, 8, 6, 5},
                                      new int[TAMANHO]{5, 7, 2, 4, 1, 2, 3, 7},
                                      new int[TAMANHO]{3, 1, 1, 4, 4, 3, 6, 4},
                                      new int[TAMANHO]{9, 6, 2, 3, 6, 6, 2, 3},
                                      new int[TAMANHO]{3, 2, 3, 2, 9, 8, 7, 2},
                                      new int[TAMANHO]{6, 6, 3, 6, 7, 6, 1, 1},
                                      new int[TAMANHO]{4, 1, 2, 5, 3, 7, 8, 3},
                                      new int[TAMANHO]{1, 9, 3, 4, 4, 4, 5, 4},
                                    };

  imprimaMatriz(matriz);
  encontreMaior(matriz);
  someDiagonal(matriz);

  for (int i = 0; i < TAMANHO; i++) {
    delete[] matriz[i];
  }
  delete[] matriz;
  return 0;
}