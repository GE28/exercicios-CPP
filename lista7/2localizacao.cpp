#include <iostream>
using namespace std;

#define TAMANHO 10

void encontreMaximo(int matriz[][TAMANHO]) {
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

  cout << "O maior número encontrado foi " << maximo;
  cout << ", na linha " << ++y;
  cout << " e coluna ";
  cout << ++x << endl;
}

int main() {
  int matriz[][TAMANHO] = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
                           {2, 3, 4, 5, 6, 7, 8, 9, 10, 11},
                           {3, 4, 5, 6, 7, 8, 9, 10, 11, 12},
                           {4, 5, 6, 7, 8, 9, 10, 11, 12, 13},
                           {5, 6, 7, 8, 9, 10, 11, 12, 31, 14},
                           {6, 7, 8, 9, 10, 11, 12, 13, 14, 15},
                           {7, 8, 9, 10, 11, 12, 13, 14, 15, 16},
                           {8, 9, 10, 11, 12, 13, 14, 15, 16, 17},
                           {9, 10, 11, 12, 13, 14, 15, 16, 17, 18},
                           {10, 11, 12, 13, 14, 15, 16, 17, 18, 19}};
  encontreMaximo(matriz);
  return 0;
}