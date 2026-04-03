#include <stdio.h>
int main(){
int num1, num2, num3;
float soma, subtração, multiplicação, media;
printf("Digite um número: ");
scanf("%d", &num1);
printf("Primeiro número: %d", num1);
printf("\nDigite mais um número: ");
scanf("%d", &num2);
printf("Segundo número: %d", num2);
printf("\nDigite outro número: ");
scanf("%d", &num3);
printf("Terceiro número: %d", num3);
soma = (num1 + num2 + num3);
subtração = (num1 - num2 - num3);
multiplicação = (num1 * num2 * num3);
media = (num1 + num2 + num3)/3.0;
printf("\nA soma dos números é %.2f", soma);
printf("\nA subtração dos números é %.2f", subtração);
printf("\nA multiplicação dos números é %.2f", multiplicação);
printf("\nA média dos números é %.2f", media);
printf("\n O primeiro número é maior que o segundo número? %d",
num1>num2);
printf("\n O segundo número é menor que o terceiro número? %d",
num2<num3);
if (num1 % 2 == 0)
printf("\n O primeiro número é par\n");
else
printf("\n O primeiro número é ímpar\n");
if (num2 % 2 == 0)
printf("\n O segundo número é par\n");
else
printf("\n O segundo número é ímpar\n");
if (num3 % 2 == 0)
printf("\n O terceiro número é par\n");
else
printf("\n O terceiro número é ímpar\n");
return 0;
}
