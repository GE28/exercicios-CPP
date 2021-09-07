#include <iostream>
using namespace std;

#define TAMANHO 5

bool preenchaLetras(char palavra[], int letras[], int index) {
  int charCode = (int)(palavra[index]);
  letras[charCode] += 1;
}

bool verifiqueAnagramas(char palavra1[], char palavra2[]) {
  int caracteres1[128] = {};
  int caracteres2[128] = {};
  for (int i = 0; i < TAMANHO; i++) {
    preenchaLetras(palavra1, caracteres1, i);
    preenchaLetras(palavra2, caracteres2, i);
  }

  for (int i = 0; i < 128; i++) {
    if (caracteres1[i] != caracteres2[i]) {
      return false;
    }
  }

  return true;
}

int main() {
  char palavra1[TAMANHO] = "AMOR";
  char palavra2[TAMANHO] = "ROMA";
  bool anagramas = false;

  anagramas = verifiqueAnagramas(palavra1, palavra2);

  if (anagramas) {
    cout << palavra1 << " e " << palavra2 << " são anagramas" << endl;
  } else {
    cout << palavra1 << " e " << palavra2 << " não são anagramas" << endl;
  }

  return 0;
}