typedef unsigned int uint;

int fat(int n) {
  int resultado = 1;
  int i = 2;

  while (i <= n) {
    resultado = resultado * i;
    i++;
  }

  return resultado;
}

int comb(int n, int p) {
  if (p < n) {
    int fatN, fatP, fatNP;
    fatN = fat(n);
    fatP = fat(p);
    fatNP = fat((n - p));

    return (fatN / (fatNP * fatP));
  } else if (p == n) {
    return 1;
  }

  return -1;
}

bool divisivel(uint a, uint b) { return a % b == 0; }

bool primo(uint n) {
  uint metade = n >> 1;
  for (uint i = metade; i > 1; i--) {
    if (divisivel(n, i)) {
      return false;
    }
  }

  return true;
}