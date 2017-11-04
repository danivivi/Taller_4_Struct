#include <stdio.h>
/*Comentario
Programa que define una tabla de proveedores, teniendo cada proveedor los siguientes 
datos:Nombre, cantidad vendida,precio unitario(introducidos por teclado)e importe
(calculados). Visualizar los datos de cada proveedor, el importe total de compra
asi como el nombre del proveedor mas barato y el del mas caro.
Fecha:30 Octubre 2017
Elaborado por:Viviana Rojas Ruiz*/

struct proveedores{
	char nombre[30];
	int cantidad_vendida;
	float precio_unitario;
	float importe;
};

void datos(proveedores v[],int tam);
void mostrarDatos(proveedores v[],int tam);

int tam = 0;

int main() 
{
	proveedores v[100];
	datos(v,tam);
	mostrarDatos(v,tam);
	return 0;
	
}

void datos(proveedores v[],int tam)
{
	int lon;
	printf("Ingrese Cantidad de Proveedores:\n");
	scanf("%d",&lon);
	for(int i=0;i<lon;i++)
	{
		printf("\n%i.Nombre: ",i+1);
		fflush(stdin);
		fgets(v[i].nombre,30,stdin);
		printf("Cantidad Vendida: ");
		scanf("%d",&v[i].cantidad_vendida);
		printf("Precio Unitario: ");
		scanf("%f",&v[i].precio_unitario);
		v[i].importe=(v[i].cantidad_vendida*v[i].precio_unitario);
		tam += 1;
	}
	
		
}

void mostrarDatos(proveedores v[],int tam){
	int mayor=0;
	int menor=0;
	int i;
	for(i=0;i<tam;i++)
	{
		printf("%i.Nombre Proveedor: %s\nCantidad Vendida: %d\n Precio Unitario: %.2f\nImporte:%.2f\n",i+1,v[i].nombre,v[i].cantidad_vendida,v[i].precio_unitario,v[i].importe);
		if(v[menor].importe>v[i].importe)
		{
			menor=i;
		}
		if(v[mayor].importe<v[i].importe)
		{
			mayor=i;
		}
		printf("aquji");
	}
	printf("Proveedor Menor:%s",v[menor].nombre);
	printf("Proveedor Mayor:%s",v[mayor].nombre);
}
