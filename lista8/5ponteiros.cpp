#include <iostream>
using namespace std;

void analisaPonteiro(int *p) {
  #define VERDE "\e[3;32m"
  #define BRANCO "\e[0;37m"

  cout << VERDE"[endereço: " << p << ", valor: " << *p << "]";
  cout << BRANCO << endl;
}

int main() {
  int valor = 1, *p = &valor - 1;

  analisaPonteiro(p);
  cout << "1. Exibe o endereço do valor e avança o ponteiro em 1 posição: ";
  cout << p++ << endl;

  analisaPonteiro(p);
  cout << "1. Exibe o novo valor e o incrementa em 1 unidade: ";
  cout << (*p)++ << endl;

  analisaPonteiro(p);
  cout << "1. Exibe o valor incrementado e avança o ponteiro em 1 "
          "posição novamente: ";
  cout << *(p++) << endl;
  analisaPonteiro(p);

  cout << "2. Exibe o valor do endereço de memória 10 posições a frente do ponteiro: ";
  cout << *(p+10) << endl;
  return 0;
}