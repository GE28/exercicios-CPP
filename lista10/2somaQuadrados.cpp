#include <iostream>
using namespace std;

typedef unsigned long long ull;

void somarQuadrados(int n, ull *soma) {
  if (n > 0) {
    *soma += n * n;
    somarQuadrados(n - 1, soma);
  }
}

int main() {
  ull resultado = 0;
  int n;

  cout << "Serão somados os quadrados de 0 até: ";
  cin >> n;

  somarQuadrados(n, &resultado);

  cout << endl << "O resultado é: " << resultado << endl;
  return 0;
}
