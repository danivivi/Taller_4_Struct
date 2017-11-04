#include <stdio.h>
/*Comentario
Estructura llamada estudiante, en la cual se tendran los
siguientes campos: Nombre, edad,grado, promedio, pedir datos al usuario 
para 3 alumnos, comprobar cual de los 3 tiene el mejor promedio y
posteriormente imprimir los datos del alumno
Fecha:28 Octubre 2017
Elaborado por: Viviana Rojas Ruiz*/

struct estudiantes{
	char nombre[30];
	int edad;
	float promedio;
	float grado;
}alumnos[3];

void datos(estudiantes v[]);
int tam=3;
int main() {
	estudiantes v[100];

	datos(v);
	return 0;
}

void datos(estudiantes v[]){
	int i,pos;
	float mejorNota = 0.0;
	
	for(i=0;i<3;i++){
		fflush(stdin);
		printf("%i.Nombre:\n",i+1);
		gets(alumnos[i].nombre);
		printf("%i.Edad:\n",i+1);
		scanf("%i",&alumnos[i].edad);
		printf("%i.Grado:\n",i+1);
		scanf("%f",&alumnos[i].grado);
		printf("Promedio:\n",i+1);
		scanf("%f",&alumnos[i].promedio);
		printf("\n");
	}
	
	for(i=0;i<3;i++){
		if(alumnos[i].promedio > mejorNota){
			mejorNota = alumnos[i].promedio;
			pos = i;
		}
	}
	printf("\nEl alumno con la mejor nota es: \n");
	printf("\nNombre: %s",alumnos[pos].nombre);
	printf("\nEdad: %i",alumnos[pos].edad);
	printf("\nGrado: %.2f",alumnos[pos].grado);
	printf("\nPromedio: %.2f\n\n",alumnos[pos].promedio);
	
}
