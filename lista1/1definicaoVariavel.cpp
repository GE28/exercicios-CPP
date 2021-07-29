#include <iostream>
using namespace std;

#define PI 3.14159

int main() {
  cout << "Informe o raio do círculo: " << endl;

  int raio;
  cin >> raio;

  double perimetro = 2 * PI * raio;
  double area = PI * raio * raio;

  cout << "O círculo de raio " << raio << " tem um perimetro " << perimetro
       << " e uma área " << area << endl;

  return 0;
}