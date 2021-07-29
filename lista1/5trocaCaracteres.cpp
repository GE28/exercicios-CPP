#include <iostream>
using namespace std;

char recebeCaractere() {
  cout << "Digite um caractere válido: " << endl;

  char c;
  cin >> c;
  return c;
}

int main() {
  char car1 = recebeCaractere();
  char car2 = recebeCaractere();
  char car3 = recebeCaractere();

  cout << "(car1): " << car1 << ", (car2): " << car2 << ", (car3): " << car3
       << endl;

  char car1Original = car1;
  car1 = car2;
  car2 = car3;
  car3 = car1Original;

  cout << "(car1): " << car1 << ", (car2): " << car2 << ", (car3): " << car3
       << endl;

  return 0;
}