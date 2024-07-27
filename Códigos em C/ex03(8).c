/*Exercicio 3*/
#include <stdio.h>

#define alunos 10  // Número de alunos
#define provas 3   // Número de provas

int main() {
  
  float notas[alunos][provas];
  int piorProvaAluno[alunos], countPiorProva1 = 0, countPiorProva2 = 0, countPiorProva3 = 0;

  for (int i = 0; i < alunos; i++) {
    for (int j = 0; j < provas; j++) {
      printf("Digite a nota do aluno %d na prova %d: ", i + 1, j + 1);
      scanf("%f", &notas[i][j]);
    }
  }

  // encontrando a pior nota de cada aluno e desempatar
  for (int i = 0; i < alunos; i++) {
    float piorNota = notas[i][0];
    piorProvaAluno[i] = 1;  // inicializar pior prova como 1

    for (int j = 1; j < provas; j++) {
      if (notas[i][j] < piorNota) {
        piorNota = notas[i][j];
        piorProvaAluno[i] = j + 1;
      }
    }
  }

  // contando a quantidade de alunos com pior nota em cada prova
  for (int i = 0; i < alunos; i++) {
    switch (piorProvaAluno[i]) {
      case 1:
        countPiorProva1++;
        break;
      case 2:
        countPiorProva2++;
        break;
      case 3:
        countPiorProva3++;
        break;
    }
  }

  // n entendi 100% o q tava pedindo, fiz o q deu...
  printf("\nResultados:\n");
  printf("Número de alunos com pior nota na prova 1: %d\n", countPiorProva1);
  printf("Número de alunos com pior nota na prova 2: %d\n", countPiorProva2);
  printf("Número de alunos com pior nota na prova 3: %d\n", countPiorProva3);

  return 0;
}
