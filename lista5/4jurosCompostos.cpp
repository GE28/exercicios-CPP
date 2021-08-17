#include <iostream>
using namespace std;

double arredonda(double valor) {
  int a = (int)(valor * 100);
  return (double)(a) / 100;
}

int main() {
#define ANOS 10
#define TAXA 0.05

  cout << "Inicio : ";
  double entrada;
  cin >> entrada;

  for (short i = 1; i <= ANOS; i++) {
    entrada += entrada * TAXA;
    cout << "A soma é " << arredonda(entrada) << " Reais após o ano " << i
         << endl;
  }

  cout << "Ao fim : " << arredonda(entrada) << " Reais" << endl;

  return 0;
}