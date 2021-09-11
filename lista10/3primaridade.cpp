#include "lista10.h"
#include <iostream>
using namespace std;

int main() {
  int n;

  cout << "O número: ";
  cin >> n;
  cout << endl;

  if (!verificarPrimaridade(n)) {
    cout << "Não é primo";
  } else {
    cout << "É primo";
  }
  cout << endl;

  return 0;
}
