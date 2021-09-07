#include <iostream>
using namespace std;
typedef unsigned short ushort;

#define TAMANHO 20

void leiaVetor(int vetor[]) {
  for (int i = 0; i < TAMANHO; i++) {
    cout << "Digite um valor inteiro: ";
    cin >> vetor[i];
  }
}

ushort encontreValor(const int vetor[], int valor) {
  for (short i = 0; i < TAMANHO; i++) {
    if (vetor[i] == valor) {
      return i;
    }
  }

  return -1;
}

int main() {
  int vetor[TAMANHO], entrada;
  short posicao;

  leiaVetor(vetor);

  cout << "Digite o valor para ser buscado no vetor: ";
  cin >> entrada;

  posicao = encontreValor(vetor, entrada);
  if (posicao < 0) {
    cout << "Valor não encontrado no vetor";
  } else {
    cout << "Valor encontrado na posição " << ++posicao;
  }

  cout << endl;
  return 0;
}