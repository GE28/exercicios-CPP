#include <iostream>
using namespace std;

#define TAMANHO 20

bool encontreValor(int **matriz, int valor) {
  for (int i = 0; i < TAMANHO; i++) {
    for (int j = 0; j < TAMANHO; j++) {
      if (matriz[i][j] == valor) {
        return true;
      }
    }
  }

  return false;
}

void mapeieOcorrentes(int **matriz, bool **mapa, int valor) {
  for (int i = 0; i < TAMANHO; i++) {
    for (int j = 0; j < TAMANHO; j++) {
      if (matriz[i][j] == valor) {
        mapa[i][j] = true;
      }
    }
  }
}

void percorraMatriz(int **busca, int **origem, bool **mapa) {
  for (int i = 0; i < TAMANHO; i++) {
    for (int j = 0; j < TAMANHO; j++) {
      if (encontreValor(origem, busca[i][j])) {
        mapeieOcorrentes(busca, mapa, busca[i][j]);
      }
    }
  }
}

#define BRANCO "\e[0;37m"
#define VERDE "\e[3;32m"

void imprimaMarcacao(int i, int j, bool **mapa) {
  if (mapa[i][j]) {
    cout << VERDE;
  }
}

void imprimaMatriz(int **matriz, bool **mapa) {
  int j = 0;

  cout << "[" << endl;
  for (int i = 0; i < TAMANHO; i++) {
    j = 0;

    cout << "[";
    imprimaMarcacao(i, j, mapa);
    cout << matriz[i][j] << BRANCO << ", ";
    for (j = 1; j < TAMANHO - 1; j++) {
      imprimaMarcacao(i, j, mapa);
      cout << matriz[i][j] << BRANCO << ", ";
    }
    imprimaMarcacao(i, j, mapa);
    cout << matriz[i][j] << BRANCO << "]," << endl;
  }
  cout << "]" << endl;
}

int main() {
  int **parametros = new int*[TAMANHO]{};
  parametros[+0] = new int[TAMANHO]{10, 6, 4, 1, 8, 9, 9, 3, 4, 2, 8, 3, 2, 9,
  3, 5, 7, 9, 2, 8};
  parametros[+1] = new int[TAMANHO]{1, 15, 3, 4, 1, 3, 9, 8, 4, 1, 4, 5, 5, 5,
  5, 3, 3, 2, 3, 6};
  parametros[+2] = new int[TAMANHO]{2, 8, 15, 3, 7, 8, 5, 4, 8, 6, 2, 6, 6, 2,
  9, 7, 4, 6, 3, 8};
  parametros[+3] = new int[TAMANHO]{5, 4, 1, 90, 9, 5, 9, 2, 4, 2, 7, 5, 9, 1,
  5, 4, 8, 9, 6, 4};
  parametros[+4] = new int[TAMANHO]{3, 7, 1, 9, 70, 7, 4, 1, 2, 6, 6, 6, 7, 6,
  5, 6, 8, 4, 7, 3};
  parametros[+5] = new int[TAMANHO]{5, 2, 5, 2, 2, 10, 3, 8, 7, 8, 9, 8, 4, 7,
  7, 1, 3, 8, 1, 4};
  parametros[+6] = new int[TAMANHO]{2, 7, 9, 8, 1, 4, 50, 9, 7, 9, 9, 9, 9, 4,
  8, 8, 2, 1, 6, 9};
  parametros[+7] = new int[TAMANHO]{7, 4, 7, 1, 1, 2, 1, 30, 9, 1, 4, 1, 5, 3,
  8, 4, 4, 1, 3, 1};
  parametros[+8] = new int[TAMANHO]{1, 2, 7, 9, 5, 3, 7, 7, 20, 2, 4, 8, 3, 8,
  8, 1, 9, 8, 2, 6};
  parametros[+9] = new int[TAMANHO]{6, 5, 4, 9, 8, 9, 3, 2, 1, 30, 1, 8, 4, 5,
  5, 6, 8, 9, 1, 9};
  parametros[10] = new int[TAMANHO]{8, 2, 7, 1, 9, 3, 2, 6, 8, 3, 20, 4, 7, 5,
  1, 3, 3, 1, 5, 3};
  parametros[11] = new int[TAMANHO]{3, 3, 8, 4, 7, 3, 1, 5, 9, 8, 2, 80, 1, 6,
  8, 9, 8, 7, 6, 6};
  parametros[12] = new int[TAMANHO]{9, 5, 8, 5, 8, 8, 7, 1, 9, 9, 1, 9, 20, 8,
  4, 7, 8, 4, 9, 7};
  parametros[13] = new int[TAMANHO]{2, 2, 3, 9, 7, 9, 9, 4, 6, 3, 9, 4, 7, 70,
  6, 5, 4, 3, 5, 1};
  parametros[14] = new int[TAMANHO]{1, 5, 9, 9, 1, 3, 6, 8, 4, 6, 4, 6, 5, 4,
  30, 9, 3, 2, 3, 7};
  parametros[15] = new int[TAMANHO]{4, 1, 8, 9, 7, 4, 4, 8, 4, 7, 8, 4, 2, 8,
  4, 30, 1, 9, 8, 5};
  parametros[16] = new int[TAMANHO]{3, 9, 8, 5, 4, 1, 5, 4, 1, 5, 1, 4, 5, 6,
  1, 1, 90, 5, 8, 2};
  parametros[17] = new int[TAMANHO]{2, 7, 5, 1, 3, 8, 1, 3, 6, 9, 5, 6, 6, 3,
  2, 9, 2, 40, 4, 2};
  parametros[18] = new int[TAMANHO]{6, 2, 3, 2, 8, 4, 9, 5, 6, 7, 6, 7, 2, 9,
  5, 4, 5, 6, 50, 8};
  parametros[19] = new int[TAMANHO]{5, 9, 5, 8, 3, 4, 8, 2, 5, 9, 3, 1, 1, 3,
  9, 6, 4, 8, 9, 90};

  int **origem = new int*[TAMANHO]{};
  origem[+0] = new int[TAMANHO]{93, 10, 71, +6, 85, 20, 73, 14, 42, 63, 77,
  34, 41, 30, 96, 67, +8, 28, 91, 63};
  origem[+1] = new int[TAMANHO]{34, 14, 37, 79, 14, 76, 85, +2, 84, 39, 28,
  78, +4, 98, 39, 88, 74, 13, 57, 17};
  origem[+2] = new int[TAMANHO]{75, 36, 50, 72, 21, +4, 40, 82, 85, 86, 46,
  21, +2, 39, 55, 13, 16, 96, 70, +1};
  origem[+3] = new int[TAMANHO]{90, 97, 34, 93, 96, 72, 39, 27, 84, 95, 97,
  17, 86, +5, 88, 62, +8, 83, 46, 92};
  origem[+4] = new int[TAMANHO]{70, 47, 68, 71, 85, 25, 41, +2, 76, 66, 56,
  67, 20, 89, 17, 18, 18, 55, 98, +4};
  origem[+5] = new int[TAMANHO]{+8, 97, 74, 49, +3, 63, 13, 10, 47, 14, 57,
  18, 60, 27, 45, +3, +7, 41, +4, 82};
  origem[+6] = new int[TAMANHO]{+9, 16, +6, 28, 60, 22, +1, 78, 77, +1, 37,
  40, 53, 12, 88, 55, 30, 56, 20, 76};
  origem[+7] = new int[TAMANHO]{69, 76, 49, 31, +4, 93, 33, 64, 90, 90, +3,
  54, 61, +8, 81, 77, 30, 38, 12, 62};
  origem[+8] = new int[TAMANHO]{92, +4, +3, 46, 69, 90, +2, 98, 48, 75, 31,
  72, 52, 79, 58, 12, 30, 46, 75, 75};
  origem[+9] = new int[TAMANHO]{92, 78, 30, 54, 85, 66, 32, 70, +5, 97, 33,
  96, +2, 35, 97, 70, 81, 54, 69, 84};
  origem[10] = new int[TAMANHO]{30, +1, 57, 82, 36, 17, 49, 21, 18, 25, 95,
  11, 58, 26, 65, +1, 91, 52, 70, 52};
  origem[11] = new int[TAMANHO]{51, +5, +5, 52, 93, +4, 24, 75, 13, 48, 60,
  43, +5, 73, 80, 40, 89, 30, 16, +8};
  origem[12] = new int[TAMANHO]{10, 12, 73, 68, 91, 39, 68, 83, 46, 93, 90,
  52, 97, 95, 60, 92, 54, 39, 24, 66};
  origem[13] = new int[TAMANHO]{86, 84, 10, 46, 58, 45, 85, +4, 74, +2, 65,
  84, 67, 39, +9, 59, 33, 32, 98, 35};
  origem[14] = new int[TAMANHO]{26, 89, 86, 25, 41, +3, 72, 94, 41, 95, 62,
  83, 36, 27, 30, 49, 28, 71, 52, +3};
  origem[15] = new int[TAMANHO]{28, 19, 42, 51, 13, 50, 11, 46, 37, 64, 80,
  63, 11, 23, 43, +7, 26, 70, +3, 22};
  origem[16] = new int[TAMANHO]{66, 20, +6, 58, +2, 90, +8, 29, 18, 60, 86,
  45, 34, 29, 51, 46, 35, 62, 47, 71};
  origem[17] = new int[TAMANHO]{81, 28, 89, 47, 51, 33, 54, 32, +4, 12, 53,
  26, 85, 13, 39, 86, +6, 46, 71, 77};
  origem[18] = new int[TAMANHO]{61, 14, 77, 50, 42, 30, 52, 32, 91, 98, 59,
  29, 82, +5, 32, 88, 38, 85, 21, 95};
  origem[19] = new int[TAMANHO]{96, 29, 76, 38, 43, 16, 79, +4, 18, 51, 80,
  78, 64, 59, 84, 62, 88, 37, 49, 36};

  bool **mapa = new bool*[TAMANHO]{
    new bool{}, new bool{}, new bool{}, new bool{}, 
    new bool{}, new bool{}, new bool{}, new bool{}, 
    new bool{}, new bool{}, new bool{}, new bool{}, 
    new bool{}, new bool{}, new bool{}, new bool{}, 
    new bool{}, new bool{}, new bool{}, new bool{},
  };

  percorraMatriz(parametros, origem, mapa);

  cout << "Os números coloridos em verde apareceram na matriz " << endl;
  imprimaMatriz(parametros, mapa);

  for (int i = 0; i < TAMANHO; i++) {
    delete[] parametros[i], origem[i];
  }
  delete[] parametros, origem;
  return 0;
}