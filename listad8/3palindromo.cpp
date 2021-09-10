// Por conta do enunciado impreciso, este código pode não estar cumprindo
// com exatidão o propósito desejado

#include <iostream>
using namespace std;

#define TAMANHO 5

void verifiquePalindromo(char letras[][TAMANHO]) {
  bool palindromo = true;
  for (int i = 0; i < TAMANHO; i++) {
    for (int j = i + 1; j < TAMANHO; j++) {
      cout << letras[i][j]
           << " === "
           << letras[j][i] << endl;
      if (letras[i][j] != letras[j][i]) {
        palindromo = false;
      }
    }
  }

  if (palindromo) {
    cout << "É um palíndromo";
  } else {
    cout << "Não é um palíndromo";
  }

  cout << endl;
}

int main() {
  char letras[][TAMANHO] = {
      {'S', 'A', 'T', 'O', 'R'}, {'A', 'R', 'E', 'P', 'O'},
      {'T', 'E', 'N', 'E', 'T'}, {'O', 'P', 'E', 'R', 'A'},
      {'R', 'O', 'T', 'A', 'S'},
  };

  verifiquePalindromo(letras);
  return 0;
}