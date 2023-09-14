#include <stdio.h>

float promedio (float *alumnos,float *notas, float prome)
{
	prome=prome/30;
	printf ("el promedio del curso es: %.2f ",prome);
}

int main() {
	
	float alumnos [30];
	float notas [30];
	int i;
	float prome=0;
	
	for (i=1; i<31; i++)
	{
		printf ("ingrese notas del alumno %d: ",i);
		scanf ("%f",&notas[i]);
		prome=prome+notas[i];
	}
	
	promedio (alumnos,notas,prome);
	
	return 0;
}

