#include <stdio.h>

int main (){
	//declaração de variáveis
	float valor_por_hora, salario;
	int horas_trabalhadas;
	//Entradas
	printf("Qual valor você ganha por hora? ");
	fflush(stdout); // tem que colocar isso pq senão não roda
	scanf("%f", &valor_por_hora);

	printf("Quantas horas você trabalhou neste mês ");
	fflush(stdout);
	scanf("%d", &horas_trabalhadas);

	//Processamento
	salario = (horas_trabalhadas * valor_por_hora);
	//Saída
	printf("Neste mês você vai receber R$ %.2f", salario );
	// %.2f é o número máximo de casas

}