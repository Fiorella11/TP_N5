#include <stdio.h>

int fibonacci (int num)
{
	int fibonacci[num];
	fibonacci[0]=0; 
	fibonacci[1]=1;
	int i;
	
	printf ("la secuencia fibonacci es: ");
	for (i=2; i<=num; i++) 
	{
		fibonacci[i]=fibonacci[i-1]+fibonacci[i-2]; 
	}
	
	for (i=1; i<num; i++) 
	{
	printf("%d", fibonacci[i]);
	printf(" ");
	}
	
	
}


int main() {
	
	int num;
	
	printf ("ingrese numero hasta donde se realizara la secuncia Fibonacci: ");
	scanf ("%d",&num);
	
	fibonacci (num);
	
	return 0;
}

