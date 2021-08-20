#include <cmath>
#include <iostream>
using namespace std;
typedef unsigned int uint;
typedef unsigned short ushort;

#define TAMANHO 5

void imprimaVetor(ushort vetor[]) {
  cout << '[' << vetor[0];
  for (int i = 1; i < TAMANHO - 1; i++) {
    cout << ", " << vetor[i];
  }
  cout << ", " << vetor[TAMANHO - 1] << "]" << endl;
}

void preenchaVetor(ushort vetor[]) {

  uint n;
  cout << "Informe um número inteiro de até 5 digitos: " << endl;
  cin >> n;

  if (n > 99999) {
    n %= 100000;
  }

  for (int i = TAMANHO - 1; i >= 0; i--) {
    uint casaDecimal = pow(10, i);
    ushort digito = (n / casaDecimal);

    n -= digito * casaDecimal;
    vetor[i] = digito;
  }

  imprimaVetor(vetor);
}

void imprimaExtenso(ushort numero[]) {
  switch (numero[4]) {
  case 2:
    cout << "vinte";
    break;
  case 3:
    cout << "trinta";
    break;
  case 4:
    cout << "quarenta";
    break;
  case 5:
    cout << "cinquenta";
    break;
  case 6:
    cout << "sessenta";
    break;
  case 7:
    cout << "setenta";
    break;
  case 8:
    cout << "oitenta";
    break;
  case 9:
    cout << "noventa";
    break;
  }

  if (numero[4] == 1) {
    switch (numero[3]) {
    case 0:
      cout << "dez ";
      break;
    case 1:
      cout << "onze ";
      break;
    case 2:
      cout << "doze ";
      break;
    case 3:
      cout << "treze ";
      break;
    case 4:
      cout << "quatorze ";
      break;
    case 5:
      cout << "quinze ";
      break;
    case 6:
      cout << "dezesseis ";
      break;
    case 7:
      cout << "dezessete ";
      break;
    case 8:
      cout << "dezoito ";
      break;
    case 9:
      cout << "dezenove ";
      break;
    }
  } else {
    if (numero[4] && numero[3]) {
      cout << " e ";
    }

    switch (numero[3]) {
    case 1:
      cout << "mil ";
      break;
    case 2:
      cout << "dois ";
      break;
    case 3:
      cout << "três ";
      break;
    case 4:
      cout << "quatro ";
      break;
    case 5:
      cout << "cinco ";
      break;
    case 6:
      cout << "seis ";
      break;
    case 7:
      cout << "sete ";
      break;
    case 8:
      cout << "oito ";
      break;
    case 9:
      cout << "nove ";
      break;
    }
  }

  if (numero[4] != 0) {
    if (numero[3] != 0) {
      cout << "mil ";
    }
  }

  if (numero[2] == 0 && (numero[1] != 0 || numero[0] != 0)) {
    cout << "e ";
  }

  switch (numero[2]) {
  case 2:
    cout << "duzentos ";
    break;
  case 3:
    cout << "trezentos ";
    break;
  case 4:
    cout << "quatrocentos ";
    break;
  case 5:
    cout << "quinhentos ";
    break;
  case 6:
    cout << "seiscentos ";
    break;
  case 7:
    cout << "setecentos ";
    break;
  case 8:
    cout << "oitocentos ";
    break;
  case 9:
    cout << "novecentos ";
    break;
  default:
    break;
  }

  if (numero[2] == 1) {
    if (numero[0] == 0 && numero[0] == 0) {
      cout << "cem ";
    } else {
      cout << "cento ";
    }
  }

  if (numero[2] != 0) {
    cout << "e ";
  }

  switch (numero[1]) {
  case 2:
    cout << "vinte";
    break;
  case 3:
    cout << "trinta";
    break;
  case 4:
    cout << "quarenta";
    break;
  case 5:
    cout << "cinquenta";
    break;
  case 6:
    cout << "sessenta";
    break;
  case 7:
    cout << "setenta";
    break;
  case 8:
    cout << "oitenta";
    break;
  case 9:
    cout << "noventa";
    break;
  }

  if (numero[1] == 1) {
    switch (numero[0]) {
    case 0:
      cout << "dez ";
      break;
    case 1:
      cout << "onze ";
      break;
    case 2:
      cout << "doze ";
      break;
    case 3:
      cout << "treze ";
      break;
    case 4:
      cout << "quatorze ";
      break;
    case 5:
      cout << "quinze ";
      break;
    case 6:
      cout << "dezesseis ";
      break;
    case 7:
      cout << "dezessete ";
      break;
    case 8:
      cout << "dezoito ";
      break;
    case 9:
      cout << "dezenove ";
      break;
    }
  } else {
    if (numero[1] != 0 && numero[0] != 0) {
      cout << " e ";
    }

    switch (numero[0]) {
    case 1:
      cout << "um ";
      break;
    case 2:
      cout << "dois ";
      break;
    case 3:
      cout << "três ";
      break;
    case 4:
      cout << "quatro ";
      break;
    case 5:
      cout << "cinco ";
      break;
    case 6:
      cout << "seis ";
      break;
    case 7:
      cout << "sete ";
      break;
    case 8:
      cout << "oito ";
      break;
    case 9:
      cout << "nove ";
      break;
    }
  }
}

int main() {
  ushort entrada[TAMANHO] = {};
  preenchaVetor(entrada);
  imprimaExtenso(entrada);

  return 0;
}