#include <stdio.h>
/*Comentario
Utilizar las 2 estructuras del ejercicio d, pero ahora pedir los datos para N 
alumnos, y calcular cual de todos tiene el mejor promedio, e imprimir sus datos.
Fecha:28 Octubre 2017
Elaborado por: Viviana Rojas Ruiz*/

struct promedio{
	float nota1;
	float nota2;
	float nota3;
};

struct alumno{
	char nombre[20];
	char sexo[20];
	int edad;
	struct promedio prom;
}alumnos[100];

void estudiantes(alumno v[],int n);

int main()
{
	alumno v[100];
	int n;
	estudiantes(v,n);
	return 0;
}

void estudiantes(alumno v[],int n)
{
	int i,pmay;
	float promedio[100], mayor = 0.0;
	printf("Ingrese Cantidad de Alumnos: ");
	scanf("%i",&n);	
	for(i=0;i<n;i++){
		fflush(stdin);
		printf("%i. Nombre:\n",i+1);
		gets(alumnos[i].nombre);
		printf("%i. Sexo:\n ",i+1);
		gets(alumnos[i].sexo);
		printf("%i. Edad:\n",i+1);
		scanf("%i",&alumnos[i].edad);
		printf("%i. Notas:\n",i+1);
		scanf("%f %f %f",&alumnos[i].prom.nota1,&alumnos[i].prom.nota2,&alumnos[i].prom.nota3);
		printf("\n");		
		promedio[i] = (alumnos[i].prom.nota1+alumnos[i].prom.nota2+alumnos[i].prom.nota3)/3;		
		if(promedio[i] > mayor){
			mayor = promedio[i];
			pmay = i;
		}	
	}	
	printf("\n-Alumno con Mayor Promedio-\n");
	printf("\nNombre: %s",alumnos[pmay].nombre);
	printf("\nSexo: %s",alumnos[pmay].sexo);
	printf("\nEdad: %i",alumnos[pmay].edad);
	printf("\nPromedio: %.2f\n",promedio[pmay]);
	
}
