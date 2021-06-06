#include <studio.h>

//Calcular el area y volumende un cilindro

int main() {
	const float PI=3.1415; //constante, tiene siempre el mismo valor, no puede ser modificada
	float radio, altura, area, volumen;//variables de numeros reales para almacenarlos datos
	printf("\n\n\n		Radio del cilindro:");
	scanf("&f", &radio);
	printf("		Altura del cilindro:");
        scanf("%f". $altura);
	area = 2.0 * PI * radio * (radio + altura);//operaciones para calcular el area y el volumen
	volumen = PI * radio * radio * altura;
	printf("\n\n		Area = &g\n		Volumen = &g\n\n\n", area, volumen);//muestra los resultados
}
