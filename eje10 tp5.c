#include <stdio.h>

float cuentas (float *num, int i)
{
	float suma=0;
	float multi=1;
	float prom=0;
	int numMenor=0;
	
	for (i=0; i<10; i++)
	{
	suma+=num[i];
	multi*=num[i];
	prom=suma/10;
	
	if (num[i]<prom)
	{
		numMenor++;
	}
	
	}
	printf ("la suma de los numeros es: %.0f\n",suma);
	printf ("la multiplicacion de los numeros es: %.0f\n",multi);
	printf ("el promedio de los numeros es: %.2f\n",prom);
	printf ("los numeros por debajo del promedio: %d\n",numMenor);
	
}

int main() {
	float num[10];
	int i;
	
	printf ("ingrese diez numeros:\n");
	for (i=0; i<10; i++)
	{
	scanf ("%f",&num[i]);
	}
	
	cuentas (num,i);
	
	return 0;
}

