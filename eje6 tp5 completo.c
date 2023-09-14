#include <stdio.h>

int sueldos (int *sueldo, int i)
{
	int mayores2000=0;
	int menores2000=0;
	
	for (i=0; i<20; i++) 
	{
	if (sueldo[i]>2000)
		{
		mayores2000=mayores2000+1;
		}
	else
		{
		menores2000=menores2000+1;
		}
	}
	printf ("los sueldos mayores a 2000: %d\n",mayores2000);
	printf ("los sueldos menores a 2000: %d\n",menores2000);

}

int main() {
	int i=0;
	int sueldo[20];
	
	for (i=0 ; i<20 ; i++)
	{
		printf ("ingrese el %d sueldo: ",i+1);
		scanf ("%d",&sueldo[i]);
		
	}
	
	sueldos (sueldo,i);
	
	return 0;
}

