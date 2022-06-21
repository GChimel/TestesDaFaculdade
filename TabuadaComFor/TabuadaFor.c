#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j, u, f, valor;
	printf("Digite a tabuada que deseja: \n");
	scanf("%d", &u);
	printf("Degite ate qual valor deseja multiplicar: \n");
	scanf("%d",&f);
	
	for(i=u; i<=u; i++){
		for(j=1; j<=f; j++){
			valor = i*j;
			printf("%d x %d = %d \n",j,i,valor);
		}
	}
}


