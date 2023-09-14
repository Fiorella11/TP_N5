#include <stdio.h>

int ventas (int *vendedores, int *unidades, int totalUnidades,int i)
{
	int mayorVenta=0;
	int j=0;
	
	if (unidades[i]>mayorVenta)
	{
		mayorVenta=unidades[i];
		j=i;
		printf ("el vendedor %d tiene la mayor venta diaria: %d\n",j,mayorVenta);
	}
	
}

int main() {
	int i,k;
	int vendedores [5];
	int unidades [5];
	int totalUnidades=0;
	
	for (i=1 ; i<5 ; i++) 
	{
		for (k=1 ; k<5 ; k++)
		{
			printf ("ingrese unidades vendidas del dia %d del vendedor %d:\n",k,i);
			scanf ("%d",&unidades[i]);
			totalUnidades=totalUnidades+unidades[i];
		}
		printf ("total de unidades vendidas: %d\n", totalUnidades);
		totalUnidades=0;
	}
	
	ventas (vendedores,unidades,totalUnidades,i);
	
	
	return 0;
}

