#include <iostream>
using namespace std;

#define PI 3.14159

int main() {
  cout << "Informe um valor para o raio: " << endl;

  int raio;
  cin >> raio;

  double areaCirculo = PI * raio * raio;
  cout << "A área de um círculo de raio " << raio << " é: " << areaCirculo
       << endl;

  double volumeEsfera = (4 * areaCirculo * raio) / 3;
  cout << "O volume de uma esfera de raio " << raio << " é: " << volumeEsfera
       << endl;

  return 0;
}