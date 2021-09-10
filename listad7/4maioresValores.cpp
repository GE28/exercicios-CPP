#include <iostream>
using namespace std;

#define TAMANHO 4

void preenchaMaximo(int **matriz1, int **matriz2, int **matrizRetorno) {
  for (int i = 0; i < TAMANHO; i++) {
    for (int j = 0; j < TAMANHO; j++) {
      matriz1[i][j] > matriz2[i][j] ? matrizRetorno[i][j] = matriz1[i][j]
                                    : matrizRetorno[i][j] = matriz2[i][j];
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
  int **matriz1 = new int *[TAMANHO];
  matriz1[0] = new int[TAMANHO]{25, 18, 5, 4};
  matriz1[1] = new int[TAMANHO]{25, 3, 42, 12};
  matriz1[2] = new int[TAMANHO]{38, 33, 25, 4};
  matriz1[3] = new int[TAMANHO]{15, 28, 38, 2};

  int **matriz2 = new int *[TAMANHO];
  matriz2[0] = new int[TAMANHO]{13, 1, 26, 1};
  matriz2[1] = new int[TAMANHO]{22, 7, 18, 11};
  matriz2[2] = new int[TAMANHO]{27, 31, 36, 2};
  matriz2[3] = new int[TAMANHO]{31, 37, 38, 13};

  int **matrizFinal = new int *[TAMANHO];
  matrizFinal[0] = new int[TAMANHO]{};
  matrizFinal[1] = new int[TAMANHO]{};
  matrizFinal[2] = new int[TAMANHO]{};
  matrizFinal[3] = new int[TAMANHO]{};

  preenchaMaximo(matriz1, matriz2, matrizFinal);
  imprimaMatriz(matrizFinal);

  for (int i = 0; i < TAMANHO; i++) {
    delete[] matriz1[i], matriz2[i];
  }
  delete[] matriz1, matriz2;
  return 0;
}