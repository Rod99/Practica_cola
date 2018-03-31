#include <stdio.h>
#include <stdlib.h>
#include "gotoxy.h"
#include "colores.h"
#include <conio.h>

void menu();
void dibujar_marco();
int main(int argc, char *argv[]) {
	system("portada.exe");
	
	system("cls");
	
	system("color 7");
	
	color(1,7);
	dibujar_marco();
	
	color(0,15);
	menu();
	getch();
	return 0;
}

void menu()
{
	int opc;
	gotoxy(50,14);printf("Elige una opcion:");
	gotoxy(50,16);printf("1.- Supermercado");
	gotoxy(50,18);printf("2.- Sistema Operativo");
	gotoxy(50,20);printf("3.- Banco");
	gotoxy(50,22);scanf("%d",&opc);
	
	system("cls");
	
	switch(opc)
	{
		case 1:
			system("supermercado.exe");
			break;
		case 2:
			system("");
			break;
		case 3:
			system("");
			break;
		default:
			gotoxy(50,24);printf("No seleccionaste una opcion valida");
			exit(1);
	}
}

void dibujar_marco()
{
	
	int i,j;
	
	for(i=0;i<120;i++)
	{
		if(i==0)
		{
			for(j=1;j<31;j++)
			{
				gotoxy(i,j);printf("%c",177);
			}
			
		}
		else
		{
			if(i==119)
			{
				for(j=1;j<31;j++)
				{
					gotoxy(i,j);printf("%c",177);
				}
			}
			else
			{
				gotoxy(i,1);printf("%c",177);
				gotoxy(i,30);printf("%c",177);
			}
			


		}
	}
}
