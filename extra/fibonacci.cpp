#include <iostream>
using namespace std;

int main() {
  cout << "Digite um número inteiro: " << endl;
  int n;
  cin >> n;

  unsigned long primeiro = 0, segundo = 1;
  for (int i = 0; i < n; i++) {
    unsigned long antigoSegundo = segundo;
    segundo += primeiro;
    primeiro = antigoSegundo;
  }

  cout << "O termo " << n << " da sequência de Fibonacci é " << primeiro
       << endl;

  return 0;
}