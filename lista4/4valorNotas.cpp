#include <iostream>
using namespace std;

typedef unsigned short ushort;

ushort conteValor(double quantia, double valorNota) {
  return quantia / valorNota;
}

double conteNotas(double quantia, double valorNota) {
  const double quantidade = conteValor(quantia, valorNota);
  const double restante = quantia - valorNota * quantidade;

  if (quantidade > 0) {
    cout << quantidade << " notas de " << valorNota << " reais" << endl;
  }
  if (restante == 0) {
    exit(0);
  }

  return restante;
}

double conteMoedas(double quantia, double valorMoeda) {
  const double quantidade = conteValor(quantia, valorMoeda);
  const double restante = quantia - valorMoeda * quantidade;

  if (quantidade > 0) {
    cout << quantidade << " notas de " << valorMoeda * 100 << " centavo(s)"
         << endl;
  }
  if (restante == 0) {
    exit(0);
  }

  return restante;
}

int main() {
  cout << "Informe uma quantia em reais: " << endl;
  double quantia;
  cin >> quantia;

  quantia = conteNotas(quantia, 100);
  quantia = conteNotas(quantia, 50);
  quantia = conteNotas(quantia, 20);
  quantia = conteNotas(quantia, 10);
  quantia = conteNotas(quantia, 5);
  quantia = conteNotas(quantia, 2);

  quantia = conteMoedas(quantia, 1);
  quantia = conteMoedas(quantia, .5);
  quantia = conteMoedas(quantia, .25);
  quantia = conteMoedas(quantia, .1);
  quantia = conteMoedas(quantia, .05);

  return 0;
}