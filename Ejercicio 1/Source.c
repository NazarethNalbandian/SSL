#include<stdio.h>

void main(int argc, char* argv[])
{
	int edad;
	char nombre[20];

	printf("Ingrese su nombre: ");
	scanf("%s", nombre);

	printf("Ingrese su edad: ");
	scanf("%d", &edad);

	printf("%s %s %s %d","Saludos,",nombre,". Tu edad es: ",edad);
	
	system("pause");
	/*getchar();*/
}