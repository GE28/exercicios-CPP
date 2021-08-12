#include <iostream>
using namespace std;

double arredonda(double valor) {
  int a = (int)(valor * 100);
  return (double)(a) / 100;
}

int main() {
#define TAXA 0.05
  short anos;
  cout << "Digite o tempo de rendimento em anos: ";
  cin >> anos;

  double entrada;
  cout << "Inicio : ";
  cin >> entrada;

  for (short i = 1; i <= anos; i++) {
    entrada += entrada * TAXA;
    cout << "A soma é " << arredonda(entrada) << " Reais após o ano " << i
         << endl;
  }

  cout << "Ao fim : " << arredonda(entrada) << " Reais" << endl;

  return 0;
}