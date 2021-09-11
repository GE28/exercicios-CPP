#include <iostream>
using namespace std;

int main() {
  int x, *p, **q;
  p = &x;
  q = &p;
  x = 10;

  // (q) ponteiro "duplo" -> (p) ponteiro -> (x) inteiro

  cout << "(1) " << &x << endl;    // endereço de x
  cout << "(2) " << q << endl;     // valor de q (endereço p apontado por q)
  cout << "(3) " << &q << endl;    // endereço de q
  cout << "(4) " << &p << endl;    // endereço de p
  cout << "(5) " << &(*q) << endl; // endereço de p (valor de q)
  cout << "(6) " << *q << endl;    // endereço apontado por p (valor de p)
  // RESPOSTA
  cout << "(7) " << **q << endl;   // valor contido no endereço apontado por p
  cout << "(8) " << x << endl;     // valor de x

  return 0;
}