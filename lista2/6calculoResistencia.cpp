#include <iostream>
using namespace std;

double obtenhaResistencia() {
  cout << "Digite o valor da resistencia: " << endl;

  double n;
  cin >> n;
  return n;
}

double calculeResistenciaSerie(double r1, double r2, double r3) {
  return r1 + r2 + r3;
}

double calculeResistenciaParalelo(double r1, double r2, double r3) {
  return (r1 + r2 + r3) / (r1 * r2 + r2 * r3 + r3 * r1);
}

int main() {
  double r1 = obtenhaResistencia();
  double r2 = obtenhaResistencia();
  double r3 = obtenhaResistencia();

  cout << "As resistências estão em série (0) ou em paralelo (1) ?" << endl;
  bool paralelo;
  cin >> paralelo;

  if (paralelo) {
    cout << calculeResistenciaParalelo(r1, r2, r3) << endl;
  } else {
    cout << calculeResistenciaSerie(r1, r2, r3) << endl;
  }

  return 0;
}