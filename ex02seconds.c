#include <stdio.h>

int main(void) {
	int seg,horas,minutos,t1=0,t2=0;

  	printf("Digite los segundos: ");
	scanf("%i",&seg);


	t1 = minutos / 60;
	t2 = horas / 3600;


	printf("\nEl equivalente de minutos es %i", minutos);
	printf("\nEl equivalente de horas es %i", horas);

	return 0;
}
