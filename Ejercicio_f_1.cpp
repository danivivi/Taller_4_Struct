#include <stdio.h>
/*Comentario
Defina unna estructura que sirva para representar una persona la estructura debe 
contener dos campos: el nombre de la persona y un valor de tipo logico que indica si 
la persona tiene algun tipo de discapacidad. Realice un programa que dado un vector 
de personas rellene dos nuevos vectores: uno que contenga las personas que no tienen
ningun tipo de discapacidad y otro que contenga las personas con discapacidad.
Fecha:28 Octubre 2017
Elaborado por: Viviana Rojas Ruiz*/

struct personas{
	char nombre[30];
	bool discapacidad;
};

int disc = 0, sinDisc = 0;
void personitas(personas v[],int tam);

int main()
{
	personas v[100];
	int tam;
	personitas(v,tam);
	return 0;
}

void personitas(personas v[],int tam)
{
	int i,opcion;
	printf("Ingrese Cantidad de personas:\n");
	scanf("%d",&tam);
	for (i=0;i<tam;i++){
		printf("%i.Nombre:",i+1);
		fflush(stdin);
		fgets(v[i].nombre,30,stdin);
		printf("Tiene alguna discapacidad:");
		printf("Ingrese el numero 1.Si ó 2.No\n");
		scanf("%d",&opcion);
		switch(opcion){
		case 1:
			v[i].discapacidad=true;
			break;
		case 2:
			v[i].discapacidad=false;
			break;
		}
	}
	printf("\nPersonas con discapacidad:\n");
	for(i=0;i<tam;i++)
	{		
		if(v[i].discapacidad == true)
		{
			disc=i;
			printf("%s\n",v[disc].nombre);
		}
	}
	printf("\nPersonas SIN discapacidad:\n");
	for(i=0;i<tam;i++)
	{		
		if(v[i].discapacidad==false)
		{
			sinDisc=i;
			printf("%s\n",v[sinDisc].nombre);
		}
	}
}
