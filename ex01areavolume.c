/********************************************************
* Area and volume -- program to print out "the area and	*
* volume of a cylinder".		 		*
* 							*
* Author: Angel Chi.	 				*
* 							*
* Purpose: Obtain the area and volume of a cylinder with*
* the radius and height.				*
*							*
* Usage: 						*
* Runs the program writte the quantities and the results*
* appears. 						*
********************************************************/


#include <studio.h>


int main() {
	const float PI=3.1415; 
	float radio, altura, area, volumen;
	/*Tell the radius of the cylinder*/
	printf("\n\n\n		Radio del cilindro:");
	scanf("&f", &radio);
	/*Tell the height of the cylinder*/
	printf("		Altura del cilindro:");
        scanf("%f". $altura);
	area = 2.0 * PI * radio * (radio + altura);
	volumen = PI * radio * radio * altura;
	/*Obtain the results (area and volume)*/
	printf("\n\n		Area = &g\n		Volumen = &g\n\n\n", area, volumen);
	return 0
}
