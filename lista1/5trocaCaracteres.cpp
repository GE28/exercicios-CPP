#include <iostream>
using namespace std;

char recebaCaractere() {
  cout << "Digite um caractere válido: " << endl;

  char c;
  cin >> c;
  return c;
}

void imprimaCaractere(char a, char b, char c) {
  cout << "(car1): " << a << ", (car2): " << b << ", (car3): " << c << endl;
}

int main() {
  char car1 = recebaCaractere();
  char car2 = recebaCaractere();
  char car3 = recebaCaractere();
  imprimaCaractere(car1, car2, car3);

  char car1Original = car1;
  car1 = car2;
  car2 = car3;
  car3 = car1Original;
  imprimaCaractere(car1, car2, car3);

  return 0;
}