#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include "gotoxy.h"
#include "colores.h"
#include "TADColaDin.h"
#include "presentacion.h"


void dibujar_cajas(int);
boolean todas_vacias(cola *,int);
int main()
{
	char nombre[50];
	int  cajeras, tiempo_atencion, tiempo_llegada,atendidos=0,i,num_random;
	elemento clientes[10000];
	
	color(0,15);
	gotoxy(39,6);printf("Bienvenido a la simulacion de un supermercado");
	gotoxy(4,10);printf("Ingresa el nombre de tu supermercado");
	gotoxy(4,12);scanf("%s",nombre);
	gotoxy(4,14);printf("Ingresa el numero de cajeras");
	gotoxy(4,16);scanf("%d",&cajeras);
	gotoxy(4,18);printf("Ingresa el tiempo de atencion de las cajeras");
	gotoxy(4,20);scanf("%d",&tiempo_atencion);
	gotoxy(4,22);printf("Ingresa el tiempo de llegada de los clientes");
	gotoxy(4,24);scanf("%d",&tiempo_llegada);
	
	system("cls");
	
	cola mis_cajas[cajeras];
	gotoxy(70,1);printf("Bienvenido a %s",nombre);
	
	dibujar_cajas(cajeras);
	
	for(i=0;i<cajeras-1;i++)
	{
		Initialize(&mis_cajas[i]);
	}
	while(atendidos<=100 && todas_vacias(&mis_cajas,cajeras)==FALSE)
	{
		EsperarMiliSeg(tiempo_llegada);
		srand(time(NULL));
		num_random = rand() % cajeras;
		Queue(&mis_cajas[num_random],clientes[atendidos]);
		
		gotoxy(6+Size(&mis_cajas[num_random]),(num_random+1)*4);printf("%d",atendidos);
		
		EsperarMiliSeg(tiempo_atencion);
		Dequeue(&mis_cajas[num_random]);
		
		gotoxy(6+Size(&mis_cajas[num_random]),(num_random+1)*4);printf("");
		atendidos++;
	}
	
	system("cls");
	gotoxy(39,6);printf("La simulacion ha terminado");
	
	getch();
}


void dibujar_cajas(int cajas)
{
	int i,j,aux=0;
	int y=3;
	
			while(aux<cajas)
			{
				
				gotoxy(6,y-1);printf("CAJA %d",aux+1);
				for(i=6;i<=25;i++)
				{
					for(j=y;j<=y+2;j++)
					{
						if(j!=y+1)
						{
							
							gotoxy(i,j);printf("*");
						}
					}
				}
				aux++;
				y=y+4;
			}
		
	
}

boolean todas_vacias(cola *arreglo,int tamano)
{
	int i;
	boolean respuesta;
	for(i=0;i<tamano;i++)
	{
		if(Empty(&*(arreglo+i)))
		{
			respuesta = TRUE;
		}
		else
		{
			respuesta = FALSE;
		}
	}
	return respuesta;
}
