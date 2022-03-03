#include <stdio.h>
#include <math.h>


int main() {
	
	int lado, perimetro, area;
	
	printf("Digite o lado do quadrado em cm: ");
	scanf("%d", &lado);
	
	perimetro = 4 * lado;
	area = pow(lado, 2);
	
	printf("Perimetro: %d \n", perimetro);
	printf("Area: %d \n", area);
	
	
	
}