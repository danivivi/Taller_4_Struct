#include <stdio.h>
/*Comentario
Programa que lee en un arreglo de estructuras los datos
de N empleados de la empresa y que imprima los datos del empleado con
mayor y menor salario.
Fecha:28 Octubre 2017
Elaborado por:Viviana Rojas Ruiz*/

struct empleado{
	char nombre[20];
	char sexo[20];
	float salario;	
}empleados[100];

void datos(empleado v[],int n);

int main() 
{	
	empleado v[100];
	int n;
	datos(v,n);
	return 0;
}

void datos(empleado v[],int n){
	int i,pmay,pmen;
	float mayor = 0.0, menor = 9999999;
	printf("Ingrese Cantidad de empleados: ");
	scanf("%i",&n);
	
	for(i=0;i<n;i++){
		fflush(stdin);
		printf("%i. Nombre Empleado: ",i+1);
		gets(empleados[i].nombre);
		fflush(stdin);
		printf("%i. Sexo Empleado: ",i+1);
		gets(empleados[i].sexo);
		printf("%i. Salario del Empleado: ",i+1);
		scanf("%f",&empleados[i].salario);
		printf("\n");
	}
	for(i=0;i<n;i++){
		if(empleados[i].salario > mayor){ 
			mayor = empleados[i].salario;
			pmay = i;
		}
		else if(empleados[i].salario < menor){
			menor = empleados[i].salario;
			pmen = i;
		}
	}
	
	printf("\nEl Empleado con el mayor salario es: \n");
	printf("\nNombre: %s",empleados[pmay].nombre);
	printf("\nSexo: %s",empleados[pmay].sexo);
	printf("\nSalario: %.2f",empleados[pmay].salario);
	
	printf("\n\nEl Empleado con el menor salario es: \n");
	printf("\nNombre: %s",empleados[pmen].nombre);
	printf("\nSexo: %s",empleados[pmen].sexo);
	printf("\nSalario: %.2f\n",empleados[pmen].salario);
	
}
