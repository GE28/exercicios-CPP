#include <iostream>
using namespace std;

int main() {
  cout << "Digite um número real: " << endl;
  double x;
  cin >> x;

  cout << "O módulo do número digitado é ";
  if (x > 0) {
    cout << x << endl;
  } else {
    cout << -x << endl;
  }

  return 0;
}