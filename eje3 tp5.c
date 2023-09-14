#include <stdio.h>

int intermedio (int num1,int num2)
{
	int i;
	
	for (i=num1+1; i<num2; i++)
	{
		printf("%d\n",i);
	}
	printf("los numeros intermedios entre %d y %d son:\n", num1, num2);
}

int main() {
	
	int num1=0,num2=0;
	
	printf ("ingrese un numero: ");
	scanf ("%d",&num1);
	printf ("ingrese un numero: ");
	scanf ("%d",&num2);
	
	intermedio (num1,num2);
	
	return 0;
}

