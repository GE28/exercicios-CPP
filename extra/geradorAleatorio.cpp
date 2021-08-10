#include <iostream>
#include <time.h>

int main() {
  using namespace std;

  srand(time(NULL));

  int n = 0;
  while (n++ < 100) {
    cout << (int)(rand() % 100) << endl;
  }
}