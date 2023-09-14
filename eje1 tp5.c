#include <stdio.h>

int suma(int *resistencia)  
{
	int i;
	float rt=0;
	for (i=0; i<resistencia[5]; i++)
	{
	printf ("resistencias %d: %d\n",i+1,resistencia[i]);
	
	 rt=rt+resistencia[i];
	}
	
	printf ("resistencia total: %.2f",rt);
	
}

int main() {
	
	int resistencia[5];
	int i=0;
	
	for (i=0 ; i<5; i++)
	{
	printf ("ingrese resistencia: ");
	scanf ("%d",&resistencia[i]);
	}
	 suma(resistencia);
	
	return 0;
}

