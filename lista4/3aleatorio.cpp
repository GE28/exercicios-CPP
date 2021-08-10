#include <iostream>
#include <time.h>
using namespace std;

void verifiqueContinuacao(int palpite) {
  if (palpite < 0) {
    cout << "Você perdeu!" << endl;
    exit(0);
  }
}

void classifiquePalpite(int aleatorio, int palpite) {
  if (palpite > aleatorio) {
    cout << "Número muito grande!";
  }
  if (palpite < aleatorio) {
    cout << "Número muito pequeno!";
  }
}

int main() {
  int palpite, tentativas;
  cout << "Digite um número negativo se quiser parar.";

  srand(time(NULL));
  const int aleatorio = rand() % 100;

  for (tentativas = 0; palpite != aleatorio; ++tentativas) {
    cout << " Tente adivinhar o número (de 0 a 99): ";
    cin >> palpite;

    verifiqueContinuacao(palpite);
    classifiquePalpite(aleatorio, palpite);
  }

  cout << "Parabéns, você descobriu o número em " << tentativas << " rodadas"
       << endl;
  return 0;
}