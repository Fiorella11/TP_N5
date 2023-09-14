#include <stdio.h>
#include <stdlib.h>

float promedio (float *num)
{
	int i;
	float prom=0;
	float sum=0;
	float numMayor=num[0];
	
	for (i=0; i<5; i++)
	{
		sum+=num[i];
		prom=sum/5;
		
		
	}
	for (i=1; i<5; i++)
	{
	if (num[i]>numMayor)
	{
		numMayor=num[i];
	}
	}
	printf ("el promedio es: %.2f\n",prom);
	printf ("el numero mayor es: %.2f\n ",numMayor);
}

int main() {
	
	float num[5];
	int i=0;
	
	for (i=0 ; i<5; i++)
	{
		printf ("ingrese numero: ");
		scanf ("%f",&num[i]);
	}
	
	promedio(num);
	
	return 0;
}
