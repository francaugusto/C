#include <stdio.h>
int main() {
int num;
int soma = 0;
printf("Digite números inteiros (0 para encerrar):\n");
scanf("%d", &num);
while (num != 0) {
soma += num;
printf("Digite outro número (0 para encerrar):\n");
scanf("%d", &num);
}
printf("A soma total é: %d\n", soma);
return 0;
}

