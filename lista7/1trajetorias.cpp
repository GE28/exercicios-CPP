#include <iostream>
using namespace std;

void analiseVetor(int vetor[]) {
  int trajetoriaAtual = vetor[0] - (1);
  cout << "[1, " << trajetoriaAtual + (1);

  while (trajetoriaAtual != -1) {
    cout << ", " << vetor[trajetoriaAtual];
    trajetoriaAtual = vetor[trajetoriaAtual] - (1);
  }

  cout << "]" << endl;
}

int main() {
  int vetor[] = {5, 7, 6, 9, 2, 8, 4, 0, 3};

  analiseVetor(vetor);
  return 0;
}