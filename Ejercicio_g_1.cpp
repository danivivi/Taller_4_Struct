#include <stdio.h>
#include<string.h>
/*Comentario
struct que almacena datos de una cancion en formato Mp3: artista, titulo,duracion
(en segundos),tamaño del fichero(kB). Un programa debe pedir datos de una 
cancion al usuario, almacenarlos en dicho struct y despues mostrarlos en pantalla
debera tener un menu que permita las opciones: añadir una nueva cancion, mostrar 
el titulo de todas las canciones.Buscar una cancion que contenga cierto texto.
(en el artista o en el titulo).
Fecha:29 Octubre 2017
Elaborado por: Viviana Rojas Ruiz*/

struct MP3
{
	char artista[30];
	char titulo[30];
	int duracion;
};

void Cancion(MP3 v[],int tam,MP3 duracion);
void Menu();
void MostrarMusica(MP3 v[],int tam);
int tam;

int main()
{
	Menu();
	return 0;
}

void Menu()
{
	int opcion;
	MP3 v[100],duracion;
	do{		
		printf("<<<Musica MP3>>>\n");
		printf("Ingrese una opcion:\n");
		printf("1.Ingresar Musica\n");
		printf("2.Buscar Cancion\n");
		printf("3.Mostrar Canciones\n");
		printf("0.Salir\n");
		scanf("%d",&opcion);
		switch(opcion){		
		case 1:
			Cancion(v,tam,duracion);
		case 2:
			
		case 3:
			MostrarMusica(v,tam);
			
		default:
			printf("Opcion Invalida.\n");			
		}		
	}while(opcion!=0);
}

void Cancion(MP3 v[],int tam,MP3 duracion)
{	
	int i;	
	printf("Cuantas canciones desea ingresar:\n");
	scanf("%d",&tam);
	for(i=0;i<tam;i++)
	{
		printf("\n%i.Titulo:\t",i+1);
		fflush(stdin);
		fgets(v[i].titulo,30,stdin);
		printf("%i.Artista:\t",i+1);
		fflush(stdin);
		fgets(v[i].artista,30,stdin);
		printf("%i.Duracion:\t",i+1);
		scanf("%f",&duracion);
	}
}

void MostrarMusica(MP3 v[],int tam)
{
	for(int i=0;i<tam;i++)
	{
		printf("\nListado de Musica:\n %i.Titulo: %s  Artista: %s  Duracion: %.2f\n",v[i].titulo,v[i].artista,v[i].duracion,i+1);
	}
}
