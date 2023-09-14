#include <stdio.h>
#include <stdlib.h>

void numeros(int *num)
{
	int suma=0;
	int k;
	int asc=1;
	int desc=1;
	
	
	for (k=1; k<10; k++)
	{
		if (num[k]<num[k-1])
		{
			asc=0;
		}
		else 
		{
			if (num[k]>num[k-1])
			{
				desc=0;
			}
		}
		suma=num[0]+num[10-1];
	}
	
	if (asc)
	{
		printf ("la lista es ASCENDENTE\n");
	}
	else
	{
	if (desc)
	{
		printf ("la lista es DESCENDENTE\n");
	}
	else
	{
		printf ("la lista es DESORDENADA\n");
	}
	}
	
	
	
	
	printf ("la suma del primer y el ultimo numero es: %d\n",suma);
	
	
	
}

int main() {
	
	int num [10];
	int i;
	
	printf ("ingrese numeros:\n");
	for (i=0; i<10; i++)
	{
		scanf ("%d",&num[i]);
		
		while (num[i]==0)
		{
			printf ("numero invalido, ingrese otro:\n");
			scanf ("%d",&num[i]);
		}
	}
	
	numeros(num);
	
	return 0;
}
