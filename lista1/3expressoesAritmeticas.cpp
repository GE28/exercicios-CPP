#include <iostream>
using namespace std;

void expressao1() { cout << 4 * 18 - 198 % 10 << endl; }

void expressao2() { cout << 10 / 3 << endl; }

void expressao3() { cout << 10 / 3.0 << endl; }

void expressao4() {
  int a, b, c, d = 123;
  a = d;
  b = c = d;
  cout << "(A) " << a << ", (B) " << b << ", (C) " << c << ", (D) " << d
       << endl;
}

void expressao5() {
  int a, b;
  a = 10;
  a = a + 3;
  b = 10;
  b += 3;
  cout << "(A) " << a << ", (B) " << b << endl;
}

void expressao6() {
  int a, b;
  a = 10;
  a = a - 3;
  b = 10;
  b -= 3;
  cout << "(A) " << a << ", (B) " << b << endl;
}

void expressao7() {
  int a;
  double b = 3.3;
  a = b;
  cout << "(A) " << a << ", (B) " << b << endl;
}

int main() {
  cout << "1) ";
  expressao1();

  cout << "2) ";
  expressao2();

  cout << "3) ";
  expressao3();

  cout << "4) ";
  expressao4();

  cout << "5) ";
  expressao5();

  cout << "6) ";
  expressao6();

  cout << "7) ";
  expressao7();
  return 0;
}