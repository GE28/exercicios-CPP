#include <iostream>
using namespace std;

long int calculeFatorial(long int x) {
  if (x == 1) {
    return x;
  }

  return calculeFatorial(x - 1) * x;
}

int main() {
  cout << "Informe um valor inteiro positivo: " << endl;
  int x;

  cin >> x;
  if (x < 0) {
    x = -x;
  }

  cout << "O fatorial de " << x++ << " é " << calculeFatorial(x) / x << endl;

  return 0;
}

/*
  5! = 5 * 4!
  4! = 4 * 3!
  4! = (5 * 4!)/5
  4! = 5!/5
  0! = 1!/1 = 1
  x! = (x+1)!/(x+1)
  */