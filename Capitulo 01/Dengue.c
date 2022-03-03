#include <stdio.h>




int main(){
	
	int suspeitos, confirmados, mortos;	
	
	printf("Preencha os dados de casos de dengue em Brasília: \n\n");
	
	printf("Casos suspeitos: ");
	scanf("%d", &suspeitos);
	
	printf("Casos confirmados: ");
	scanf("%d", &confirmados);
	
	printf("Quantidade de mortos: ");
	scanf("%d", &mortos);
	
	system("cls");
	
	printf("Casos suspeitos: %d \n", suspeitos);
	printf("Casos suspeitos: %d \n", confirmados);
	printf("Casos suspeitos: %d", mortos);
}