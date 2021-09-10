#include <iostream>
using namespace std;

#define TAMANHO 10

void encontreMaximo(int **matriz) {
  int maximo = matriz[0][0], x = 1, y = 1;

  for (int i = 0; i < TAMANHO; i++) {
    for (int j = 0; j < TAMANHO; j++) {
      if (matriz[i][j] > maximo) {
        maximo = matriz[i][j];
        x = j;
        y = i;
      }
    }
  }
  for (int i = 0; i < TAMANHO; i++) {
    for (int j = 0; j < TAMANHO; j++) {
      if (matriz[i][j] > maximo) {
        maximo = matriz[i][j];
        x = j;
        y = i;
      }
    }
  }

  cout << "O maior número encontrado foi " << maximo;
  cout << ", na linha " << ++y;
  cout << " e coluna ";
  cout << ++x << endl;
}

int main() {
  int **matriz = new int *[TAMANHO];
  for (int i = 0; i < TAMANHO; i++) {
    int v = 1 + i;
    matriz[i] =
        new int[TAMANHO]{v++, v++, v++, v++, v++, v++, v++, v++, v++, v};
  }

  encontreMaximo(matriz);

  for (int i = 0; i < TAMANHO; i++) {
    delete[] matriz[i];
  }
  delete[] matriz;
  return 0;
}