#include "lista11.h"

int main() {
  int tamanhoN = 10;
  int numeros[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  imprimirVetor<int>(numeros, tamanhoN);

  inc(numeros, 0);
  imprimirVetor<int>(numeros, tamanhoN);

  return 0;
}
