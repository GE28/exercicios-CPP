#include "lista11.h"

int main() {
  int tamanhoR = 5;
  int ocupacao = 3;

  double racionais[tamanhoR] = {};
  racionais[0] = 3;
  racionais[2] = -1.2;
  racionais[4] = -5;

  imprimirVetor<double>(racionais, tamanhoR);
  exibirMinimo(racionais, ocupacao);

  return 0;
}
