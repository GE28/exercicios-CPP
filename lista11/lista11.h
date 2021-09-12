#include <iostream>
using namespace std;

template <typename tipo> void imprimirVetor(tipo vetor[], int tamanho) {
  int i = 0;

  cout << '[';
  for (i = 0; i < tamanho - 1; i++) {
    cout << vetor[i] << ", ";
  }
  cout << vetor[i] << "]" << endl;
}

void inc(int tab[], int pos) { tab[pos]++; }

double encontrarMinimo(double vetor[], int ocupacao) {
  int i = 0;
  double minimo = vetor[0];

  for (int i = 0; i < ocupacao; i++) {
    if (vetor[i] == 0) {
      ocupacao++;
    } else if (vetor[i] < minimo) {
      minimo = vetor[i];
    }
  }

  return minimo;
}

void exibirMinimo(double vetor[], int ocupacao) {
  double minimo = encontrarMinimo(vetor, ocupacao);
  cout << "O menor valor contido no vetor é: " << minimo << endl;
}

int busca(int x, int *tab, int nb) {
  for (int i = 0; i < nb; i++) {
    if (*(tab + i) == x) {
      return i;
    }
  }

  return -1;
}

void buscarValor(int alvo, int *elemento, int tamanho) {
  int posicao = busca(alvo, elemento, tamanho);

  if (posicao > -1) {
    cout << "O elemento foi encontrado na posição " << posicao + 1;
  } else {
    cout << "O elemento não foi encontrado";
  }

  cout << endl;
}