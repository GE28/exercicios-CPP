#include "lista11.h"

int main() {
  int tamanhoN = 12;
  int numeros[tamanhoN] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

  imprimirVetor<int>(numeros, tamanhoN);
  buscarValor(13, numeros, tamanhoN);

  return 0;
}
