#include <stdio.h>

int notasMayores (int *notas,int i)
{
	for (i=0; i<15; i++)
	{
	if (notas[i]>8)
	{
		printf ("posicion del alumno: %d. Nota: %d\n\n",i+1,notas[i]);
	}
	}
	return 0;
}

int main() {
	int i;
	int notas[15];
	
	for (i=0; i<15; i++)
	{
		printf ("ingrese nota %d: ",i+1);
		scanf ("%d",&notas[i]);
	}
	
	notasMayores (notas,i);
	
	return 0;
}

