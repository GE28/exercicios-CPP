#include <iostream>
using namespace std;

typedef unsigned short ushort;

ushort conteValor(double *quantia, double valorNota) {
  ushort quantidade;

  while (*quantia >= valorNota) {
    *quantia -= valorNota;
    quantidade++;
  }

  return quantidade;
}

void conteNotas(double *quantia, double valorNota) {
  const auto quantidade = conteValor(quantia, valorNota);

  if (quantidade > 0) {
    cout << quantidade << " nota(s) de " << valorNota << " reais" << endl;
  }

  if (*quantia == 0) {
    exit(0);
  }
}

void conteMoedas(double *quantia, double valorMoeda) {
  const auto quantidade = conteValor(quantia, valorMoeda);

  if (quantidade > 0) {
    cout << quantidade << " moeda(s) de " << valorMoeda * 100 << " centavo(s)"
         << endl;
  }

  if (*quantia == 0) {
    exit(0);
  }
}

int main() {
  cout << "Informe uma quantia em reais: ";

  double quantia;
  cin >> quantia;

  double *enderecoQuantia = &quantia;

  // conteNotas(enderecoQuantia, 200); // [considera notas de 200]
  conteNotas(enderecoQuantia, 100);
  conteNotas(enderecoQuantia, 50);
  conteNotas(enderecoQuantia, 20);
  conteNotas(enderecoQuantia, 10);
  conteNotas(enderecoQuantia, 5);
  conteNotas(enderecoQuantia, 2);

  conteMoedas(enderecoQuantia, 1);
  conteMoedas(enderecoQuantia, .5);
  conteMoedas(enderecoQuantia, .25);
  conteMoedas(enderecoQuantia, .1);
  conteMoedas(enderecoQuantia, .05);
  return 0;
}