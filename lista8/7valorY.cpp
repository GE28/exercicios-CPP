#include <iostream>
using namespace std;

int main() {
  int y, *p, x;
  y = 0;     /* y recebe o valor 0 */
  p = &y;    /* p recebe o endereço de y */
  x = *p;    /* x recebe o valor no endereço de y (x = 0) */
  x = 4;     /* x recebe o valor 4 */
  (*p)++;    /* valor no endereço de y incrementado em 1 (y = 1) */
  x--;       /* valor de x decrementado em 1 (x = 3) */
  (*p) += x; /* valor x sendo somado ao valor no endereço de y
                (y = y + x)(y = 1 + 3)(y = 4) */
  cout << "y = " << y << endl; // y = 4
  return 0;
}