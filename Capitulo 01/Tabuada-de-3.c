#include <stdio.h>





int main() {
	
	int i, produto;
	
	printf("Tabuada de 3: \n\n");
	
	for(i=1;i<=10;i++){
		produto = 3*i;
		printf("3 x %d = %d \n", i, produto);
	}
	
}