#include <iostream>
using namespace std;

char obtenhaCaractere() {

  char c;
  cin >> c;
  return c;
}

int main() {
  cout << "Não digita \"s\" >:(" << endl;
  char diferenteDeS = obtenhaCaractere();

  while (diferenteDeS != 's') {
    cout << "Isso mesmo, um \"" << diferenteDeS
         << "\", do jeito que eu gosto >:)" << endl;
    diferenteDeS = obtenhaCaractere();
  }

  cout << "...COMO VOCÊ OUSA?" << endl;

  return 0;
}