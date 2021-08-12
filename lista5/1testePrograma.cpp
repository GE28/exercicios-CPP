#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int resultado = 1;
  int i = 2;

  while (i <= n) {
    resultado = resultado * i;
    i++;
  }

  cout << "O resultado:  " << resultado;
}

// n = 5: 5! = 5 * 4 * 3 * 2 * 1 = 120
// Exibe n!