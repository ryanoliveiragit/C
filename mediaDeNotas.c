#include <stdio.h>

int main() {
  float n1;
  float n2;
  float n3;
  float n4;
  float media;
  
  printf("Digite a nota 1: ");
  scanf("%f", &n1);
  printf("Digite  a nota 2: ");
  scanf("%f", &n2);
  printf("Digite  a nota 3: ");
  scanf("%f", &n3);
  printf("Digite  a nota 4: ");
  scanf("%f", &n4);

  media = (n1 + n2 + n3 + n4) / 4;

 if (media >= 7) {
    printf("A Media da sua nota é: %.1f\n", media);
    printf("Voce foi Aprovado");
  } else {
    printf("A Media da sua nota é: %.1f\n", media);
    printf("Voce foi Reprovado");
  }

return 0;
}
  