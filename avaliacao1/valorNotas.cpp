#include <iostream>
using namespace std;

int conteValor(double quantia, double valorNota) { return quantia / valorNota; }

double conteNotas(double quantia, double valorNota) {
  double quantidade = conteValor(quantia, valorNota);
  double restante = quantia - valorNota * quantidade;

  if (quantidade > 0) {
    cout << quantidade << " nota(s) de " << valorNota << " reais" << endl;
  }

  return restante;
}

double conteMoedas(double quantia, double valorMoeda) {
  double quantidade = conteValor(quantia, valorMoeda);
  double restante = quantia - valorMoeda * quantidade;

  if (quantidade > 0) {
    cout << quantidade << " moeda(s) de " << valorMoeda * 100 << " centavo(s)"
         << endl;
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