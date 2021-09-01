#include <iostream>
using namespace std;

void realizarOperacao(double numero1, double numero2, char tipo) {
  switch (tipo) {
  case 'S':
    cout << "A soma de " << numero1 << " e " << numero2 << " eh "
         << numero1 + numero2;
    break;
  case 'P':
    cout << "O produto entre " << numero1 << " e " << numero2 << " eh "
         << numero1 * numero2;
    break;
  case 'U':
    cout << "A subtração de " << numero1 << " por " << numero2 << " eh "
         << numero1 - numero2;
    break;
  case 'D':
    cout << "A divisão entre " << numero1 << " e " << numero2 << " eh "
         << numero1 / numero2;
    break;
  default:
    cout << "Operacao invalida! Por favor, execute o programa novamente";
    break;
  }

  cout << endl;
}

int main() {
  double n1, n2;
  char tipoOperacao;

  cout << "Escolha uma das seguintes opcoes: " << endl;
  cout << "S - Soma" << endl;
  cout << "P - Produto" << endl;
  cout << "U - Subtração" << endl;
  cout << "D - Divisão" << endl;
  cin >> tipoOperacao;

  cout << "Digite dois números: " << endl;
  cin >> n1;
  cin >> n2;

  realizarOperacao(n1, n2, tipoOperacao);
  return 0;
}