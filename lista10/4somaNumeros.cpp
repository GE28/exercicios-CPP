#include "lista10.h"
#include <iostream>
using namespace std;

typedef unsigned long long ull;

int main() {
  ull resultado = 0;
  int n;

  cout << "Serão somados os números de 0 até: ";
  cin >> n;

  somarNumeros(n, &resultado);

  cout << endl << "O resultado é: " << resultado << endl;
  return 0;
}
