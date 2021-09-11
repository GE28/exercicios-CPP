#include <iostream>
using namespace std;

void teclaShift(char *letra) { (*letra) -= 32; }

int main() {
  char letraA = 'a';
  cout << letraA;

  teclaShift(&letraA);
  cout << letraA << endl;
  return 0;
}
