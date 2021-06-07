#include <studio.h>


int main() {
	const float PI=3.1415; 
	float radio, altura, area, volumen;
	printf("\n\n\n		Radio del cilindro:");
	scanf("&f", &radio);
	printf("		Altura del cilindro:");
        scanf("%f". $altura);
	area = 2.0 * PI * radio * (radio + altura);
	volumen = PI * radio * radio * altura;
	printf("\n\n		Area = &g\n		Volumen = &g\n\n\n", area, volumen);
	return 0
}
