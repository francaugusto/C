#include <stdio.h>
float calcular_salario_bruto(float valor_hora, float horas) {
return valor_hora * horas;
}
float calcular_desconto(float salario_bruto) {
return salario_bruto * 0.09;
}
float calcular_salario_liquido(float salario_bruto, float desconto) {
return salario_bruto - desconto;
}
int main() {
float valor_hora, horas;
float salario_bruto, desconto, salario_liquido;
printf("Digite o valor da hora de trabalho: ");
scanf("%f", &valor_hora);
printf("Digite a quantidade de horas trabalhadas no mês: ");
scanf("%f", &horas);
salario_bruto = calcular_salario_bruto(valor_hora, horas);
desconto = calcular_desconto(salario_bruto);
salario_liquido = calcular_salario_liquido(salario_bruto, desconto);
printf("\nSalário Bruto: R$ %.2f\n", salario_bruto);
printf("Desconto (9%%): R$ %.2f\n", desconto);
printf("Salário Líquido: R$ %.2f\n", salario_liquido);
return 0;
}