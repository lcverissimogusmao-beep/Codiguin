#include <stdio.h>
int main() {
char nome[100];
double valorHora;
int horasTrabalhadas;
double pagamento;
printf("Nome: ");
fgets(nome, sizeof(nome), stdin);
printf("Valor por hora: ");
scanf("%lf", &valorHora);
printf("Horas trabalhadas: ");
scanf("%d", &horasTrabalhadas);
pagamento = valorHora * horasTrabalhadas;
printf("O pagamento para %s deve ser R$ %.2lf\n", nome, pagamento);

return 0;
}