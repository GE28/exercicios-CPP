#include <iostream>
#include <time.h>
using namespace std;

#define ALUNOS 100
#define QUESTOES 10

void distribuaNotas(char **provas, char *gabarito) {
  double media = 0;
  for (int a = 0; a < ALUNOS; a++) {
    int nota = 0;
    for (int q = 0; q < QUESTOES; q++) {
      if (provas[a][q] == gabarito[q]) {
        nota += 1;
      }
    }
    media += nota;
    cout << "A nota do " << a + 1 << "º aluno foi " << nota << "/10" << endl;
  }

  media /= ALUNOS;
  cout << "Média entre as notas: " << media << "/10" << endl;
}

int main() {
  srand(time(NULL));
  
  char **provas = new char*[ALUNOS]{};
  for (int i = 0; i < ALUNOS; i++) {
    provas[i] = new char[QUESTOES];
    for (int j = 0; j < QUESTOES; j++) {
      provas[i][j] = (char)((rand() % 5) + 97);
    }
  }

  char *gabarito = new char[QUESTOES]{'b', 'c', 'c', 'b', 'c', 'a', 'a', 'a', 'c', 'd'};
  distribuaNotas(provas, gabarito);

  for (int i = 0; i < ALUNOS; i++) {
   delete[] provas[i];
  }
  delete[] provas;
  return 0;
}