#include <iostream>
using namespace std;

void calculePercurso(int distancias[][6], int rota[], int tamanho) {
  int percurso = 0;
  for (int i = 0; i < tamanho - 1; i++) {
    int origem = rota[i] - 1;
    int destino = rota[i + 1] - 1;
    percurso += distancias[origem][destino];
  }

  cout << "A distancia percorrida durante a viagem foi: " << percurso << endl;
}

int main() {
  int distancias[][6] = {{0, 63, 210, 190, 0, 190}, {63, 0, 160, 150, 95, 0},
                         {210, 160, 0, 10, 0, 0},   {190, 150, 10, 0, 0, 0},
                         {0, 95, 0, 0, 0, 80},      {190, 0, 0, 0, 80, 0}};

  int rota[] = {3, 4, 2, 5, 6, 1};
  int tamanho = *(&rota + 1) - rota;

  calculePercurso(distancias, rota, tamanho);
  return 0;
}