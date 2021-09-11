typedef unsigned long long ull;

void teclaShift(char *letra) { (*letra) -= 32; }

void somarQuadrados(int n, ull *soma) {
  if (n > 0) {
    *soma += n * n;
    somarQuadrados(n - 1, soma);
  }
}
