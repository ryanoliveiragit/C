#include <stdio.h>

int main() {
  int number;
  int count;
  int result;
  
    printf("Digite um número de 1 a 10: ");
    scanf("%d", &number);
    printf("O número digitado foi: %d\n", number);

    if (number <= 10) {
      for(count = 1; count <= 10; count++) {
        result = count * number;
        printf("%d x %d = %d\n", count, number, result);
      }
    } else {
      printf("Valor informado é invalido\n");
    }
    return 0;
};