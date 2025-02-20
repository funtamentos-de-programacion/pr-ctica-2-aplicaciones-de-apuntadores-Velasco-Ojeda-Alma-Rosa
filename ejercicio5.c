#include<stdio.h>


void pasarValor(int); // prototipos me dice que retorna y el tipo de dato que recibe, pero no dice que hace
void pasarReferencia(int *);


int main(){
  int nums[] = {55,44,33,22,11};
  int *ap, cont;
  ap = nums;
  
  printf("Pasar valor: %d\n", *ap);
  pasarValor(*ap);
  printf("Pasar referencia: %d\n", *ap);
  pasarReferencia(ap);
  printf("Valor final: %d\n", *ap);
  return 0;
}


void pasarValor(int equis){
  printf("%d\n", equis);
  equis = 128;
  printf("%d\n", equis);
}

void pasarReferencia(int *equis){ //Todo lo que pasemos por un apuntador-> referencia
  printf("%d\n", *equis);
  *equis = 128;
  printf("%d\n", *equis);
}
