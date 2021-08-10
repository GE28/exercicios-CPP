#include <iostream>
using namespace std;

template <typename Tipo> Tipo imprimaEnderecos() {
  Tipo vec[10] = {};
  for (int i = 0; i < 10; i++) {
    cout << "valor: " << vec[i] << ", endereço: " << &vec[i] << endl;
  }

  cout << "cada valor do tipo " << typeid(Tipo).name() << " ocupa "
       << sizeof(Tipo) << " bytes em memória\n\n";
}

int main() {
  imprimaEnderecos<short>();
  imprimaEnderecos<int>();
  imprimaEnderecos<float>();
  imprimaEnderecos<long>();
  imprimaEnderecos<double>();
}