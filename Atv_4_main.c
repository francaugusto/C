#include <stdio.h>
int main() {
int vetor[5];
int soma = 0;
printf("Digite 5 números inteiros:\n");
for (int i = 0; i < 5; i++) {
printf("Valor %d: ", i + 1);
scanf("%d", &vetor[i]);
}
for (int i = 0; i < 5; i++) {
soma += vetor[i];
}
printf("\nElementos do vetor:\n");
for (int i = 0; i < 5; i++) {
printf("%d\n", vetor[i]);
}
printf("\nSoma total = %d\n", soma);
return 0;
}
