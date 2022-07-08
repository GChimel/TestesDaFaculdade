#include <stdio.h>
#include <stdlib.h>

int main () {
	int valor, resultado;
	
	printf("Digite um valor: \n");
	scanf("%d", &valor);
	if(valor < 0){
		printf("Seu valor e negativo");
	}else{
		printf("Seu valor e positivo");
	}if (valor == 0)
	printf("O valor nao e nem positivo e nem negativo");
}

 
