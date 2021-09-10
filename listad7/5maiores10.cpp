#include <iostream>
using namespace std;

#define TAMANHO 6

void conteMaiores(int **matriz) {
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

int main() {
  int **matriz = new int *[TAMANHO];
  matriz[0] = new int[TAMANHO]{12, 13, 9, 8, 15, 2};
  matriz[1] = new int[TAMANHO]{15, 5, 7, 13, 5, 3};
  matriz[2] = new int[TAMANHO]{8, 6, 15, 2, 4, 10};
  matriz[3] = new int[TAMANHO]{19, 12, 7, 2, 8, 9};
  matriz[4] = new int[TAMANHO]{15, 5, 10, 9, 2, 1};
  matriz[5] = new int[TAMANHO]{11, 13, 5, 12, 12, 11};

  conteMaiores(matriz);

  for (int i = 0; i < TAMANHO; i++) {
    delete[] matriz[i];
  }
  delete[] matriz;
  return 0;
}