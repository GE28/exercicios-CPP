#include <iostream>
using namespace std;

char recebaCaractere() {

  char c;
  cin >> c;
  return c;
}

int main() {
  cout << "Não digita \"s\" >:(" << endl;
  char diferenteDeS = recebaCaractere();

  while (diferenteDeS != 's') {
    cout << "Isso mesmo, um \"" << diferenteDeS
         << "\", do jeito que eu gosto >:)" << endl;
    diferenteDeS = recebaCaractere();
  }

  cout << "...COMO VOCÊ OUSA?" << endl;

  return 0;
}