#include <iostream>
using namespace std;

#define TAMANHO 5

void verifiquePalindromo(char **letras) {
  bool palindromo = true;
  for (int i = 0; i < TAMANHO; i++) {
    for (int j = i + 1; j < TAMANHO; j++) {
      cout << letras[i][j] << " === " << letras[j][i] << endl;
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
  char **letras = new char*[TAMANHO]{
      new char[TAMANHO]{'S', 'A', 'T', 'O', 'R'},
      new char[TAMANHO]{'A', 'R', 'E', 'P', 'O'},
      new char[TAMANHO]{'T', 'E', 'N', 'E', 'T'},
      new char[TAMANHO]{'O', 'P', 'E', 'R', 'A'},
      new char[TAMANHO]{'R', 'O', 'T', 'A', 'S'},
  };

  verifiquePalindromo(letras);

  for (int i = 0; i < TAMANHO ; i++) {
    delete[] letras[i];
  }
  delete[] letras;
  return 0;
}