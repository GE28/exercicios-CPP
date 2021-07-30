#include <iostream>
using namespace std;

int main() {
  for (int x = 0; x <= 5; x++) {
    for (int y = 0; y <= 10; y++) {
      cout << "(" << x << "," << y << ")";
    }
    cout << endl;
  }

  return 0;
}