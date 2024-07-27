
#include <stdio.h>
#include <stdlib.h>
int main() {  
  int horaChegada, minutoChegada, horaPartida, minutoPartida, tempoTotalMinutos, tempoPagoHoras, horasExcedentes;
  float precoTotal;
  
  printf("Digite a hora de chegada (hh mm): \n");
  scanf("%d %d", &horaChegada, &minutoChegada);
  printf("Digite a hora de partida (hh mm): \n");
  scanf("%d %d", &horaPartida, &minutoPartida);
  tempoTotalMinutos = (horaPartida - horaChegada) * 60 + (minutoPartida - minutoChegada);
  
  if (tempoTotalMinutos < 0) {
    tempoTotalMinutos += 24 * 60;
  } 
  
  tempoPagoHoras = tempoTotalMinutos / 60 + (tempoTotalMinutos % 60 != 0); 
  precoTotal = 0;
  
  if (tempoPagoHoras <= 2) {
    precoTotal = tempoPagoHoras * 1.0;
  } else if (tempoPagoHoras <= 4) {
    precoTotal = 2.0 + (tempoPagoHoras - 2) * 1.4;
  } else {
    precoTotal = 4.8 + (tempoPagoHoras - 4) * 2.0;
  }

  printf("Preco total: R$ %.2f\n", precoTotal);

  return 0;
}
