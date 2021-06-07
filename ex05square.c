#include <stdio.h>

int main(){

	int n;

	printf("Especifica el tamaño del cuadro");
	scanf("%i",&n);
	prinft("\n");

		for(int r = 1; r<= n; r++)
		{
			for(int l = 1 ; l <=n ; l++)
			{
				prinft("*");
			}
			printf("\n");
		}

	return 0
}
