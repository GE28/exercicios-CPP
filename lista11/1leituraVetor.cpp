#include "lista11.h"

int main() {
  int tamanhoN = 10;
  int numeros[tamanhoN] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  imprimirVetor<int>(numeros, tamanhoN);

  int tamanhoC = 17;
  char letras[tamanhoC] = "BCC CEFET 2021.1";
  imprimirVetor<char>(letras, tamanhoC);

  int tamanhoD = 6;
  double racionais[tamanhoD] = {3, 3.1, 3.14, 3.141, 3.1416, 3.14159};
  imprimirVetor<double>(racionais, tamanhoD);

  return 0;
}
