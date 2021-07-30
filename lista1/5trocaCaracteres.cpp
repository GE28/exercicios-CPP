#include <iostream>
using namespace std;

char obtenhaCaractere() {
  cout << "Digite um caractere válido: " << endl;

  char c;
  cin >> c;
  return c;
}

void imprimaCaractere(char a, char b, char c) {
  cout << "(car1): " << a << ", (car2): " << b << ", (car3): " << c << endl;
}

int main() {
  char car1 = obtenhaCaractere();
  char car2 = obtenhaCaractere();
  char car3 = obtenhaCaractere();
  imprimaCaractere(car1, car2, car3);

  char car1Original = car1;
  car1 = car2;
  car2 = car3;
  car3 = car1Original;
  imprimaCaractere(car1, car2, car3);

  return 0;
}