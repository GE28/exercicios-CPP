#include "lista10.h"
#include <iostream>
using namespace std;

typedef unsigned long long ull;

int main() {
  ull resultado = 0;
  int n;

  cout << "Serão somados os quadrados de 0 até: ";
  cin >> n;

  somarQuadrados(n, &resultado);

  cout << endl << "O resultado é: " << resultado << endl;
  return 0;
}
