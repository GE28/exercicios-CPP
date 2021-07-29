#include <iostream>
using namespace std;

char recebeCaractere() {
  cout << "Digite um caractere válido: " << endl;

  char c;
  cin >> c;
  return c;
}

void imprimeCaracteres(char a, char b, char c) {
  cout << "(car1): " << a << ", (car2): " << b << ", (car3): " << c << endl;
}

int main() {
  char car1 = recebeCaractere();
  char car2 = recebeCaractere();
  char car3 = recebeCaractere();
  imprimeCaracteres(car1, car2, car3);

  char car1Original = car1;
  car1 = car2;
  car2 = car3;
  car3 = car1Original;
  imprimeCaracteres(car1, car2, car3);

  return 0;
}