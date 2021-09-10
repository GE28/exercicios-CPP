#include <iostream>
using namespace std;

#define TAMANHO 20

void encontreValor(int **matriz, int valor) {
  int maximo = matriz[0][0], x = -1, y = -1;
  for (int i = 0; i < TAMANHO; i++) {
    for (int j = 0; j < TAMANHO; j++) {
      if (matriz[i][j] == valor) {
        x = j;
        y = i;
      }
    }
  }

  if (x > -1) {
    cout << "O valor foi encontrado na linha " << ++y << " e coluna " << ++x
         << endl;
  } else {
    cout << "O valor não foi encontrado." << endl;
  }
}

int main() {
  int **matriz = new int*[TAMANHO];
  matriz[0] = new int[TAMANHO]{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,};
  matriz[1] = new int[TAMANHO]{2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,};
  matriz[2] = new int[TAMANHO]{3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,};
  matriz[3] = new int[TAMANHO]{4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,};
  matriz[4] = new int[TAMANHO]{5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,};
  matriz[5] = new int[TAMANHO]{6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,};
  matriz[6] = new int[TAMANHO]{7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,};
  matriz[7] = new int[TAMANHO]{8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,};
  matriz[8] = new int[TAMANHO]{9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,};
  matriz[9] = new int[TAMANHO]{10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,};
  matriz[10] = new int[TAMANHO]{11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,};
  matriz[11] = new int[TAMANHO]{12,13,14,15,16,17,18,19,20,41,22,23,24,25,26,27,28,29,30,31,};
  matriz[12] = new int[TAMANHO]{13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,};
  matriz[13] = new int[TAMANHO]{14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,};
  matriz[14] = new int[TAMANHO]{15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,};
  matriz[15] = new int[TAMANHO]{16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,};
  matriz[16] = new int[TAMANHO]{17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,};
  matriz[17] = new int[TAMANHO]{18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,};
  matriz[18] = new int[TAMANHO]{19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,};
  matriz[19] = new int[TAMANHO]{20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,};

  int valor = 41;

  encontreValor(matriz, valor);

  for (int i = 0; i < TAMANHO; i++) {
    delete[] matriz[i];
  }
  delete[] matriz;
  return 0;
}