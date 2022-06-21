#include <stdio.h>
#include <stdlib.h>
int main() {
	char frase[60];
	int i, j;
	printf("Qual sua frase? \n");
	gets(frase);
	printf("Quantas vezes quer repetila? \n");
	scanf("%d", &i);
	for(j=1; j<=i; j++){
		printf("%s \n",frase);
	}
}
