#include <iostream>
using namespace std;

#define TAMANHO 6
#define PONTOS 6

void calculePercurso(int **distancias, int *rota) {
  int percurso = 0;
  for (int i = 0; i < PONTOS - 1; i++) {
    int origem = rota[i] - 1;
    int destino = rota[i + 1] - 1;
    percurso += distancias[origem][destino];
  }

  cout << "A distancia percorrida durante a viagem foi: " << percurso << endl;
}

int main() {
  int **distancias = new int *[TAMANHO] {
    new int[TAMANHO]{0, 63, 210, 190, 0, 190},
    new int[TAMANHO]{63, 0, 160, 150, 95, 0},
    new int[TAMANHO]{210, 160, 0, 10, 0, 0},
    new int[TAMANHO]{190, 150, 10, 0, 0, 0},
    new int[TAMANHO]{0, 95, 0, 0, 0, 80}, 
    new int[TAMANHO]{190, 0, 0, 0, 80, 0},
  };
  int *rota = new int[PONTOS]{3, 4, 2, 5, 6, 1};

  calculePercurso(distancias, rota);

  for (int i = 0; i < TAMANHO; i++) {
    delete[] distancias[i];
  }
  delete[] distancias, rota;
  return 0;
}