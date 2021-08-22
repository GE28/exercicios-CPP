#include <iostream>
#include <time.h>

int main() {
  using namespace std;
  srand(time(NULL));

  int tamanho, min, max, m, n;
  cout << "Tamanho: ";
  cin >> tamanho;

  cout << "Mínimo: ";
  cin >> min;

  cout << "Máximo: ";
  cin >> max;
  max = (max - min) + 1;

  cout << "{";
  for (n = 0; n < tamanho; n++) {
    m = 0;
    cout << "{";
    for (m = 1; m < tamanho - 1; m++) {
      cout << (int)(rand() % max) + min;
      cout << ",";
    }
    cout << (int)(rand() % max) + min;
    cout << "},";
  }
  cout << "}" << endl;
}