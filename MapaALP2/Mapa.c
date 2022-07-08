#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{	
	int D, d, q,r;
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite o dividento: ");
	scanf("%d",&D);
	
	printf("Digite o divisor: ");
	scanf("%d",&d);
	
	q = D / d;
	r = D % d;
	
	printf("Os resultados são: \n");
	printf("Quociente: %d \n", q);
	printf("Resto: %d\n", r);
	return 0;
}
