#include <stdio.h>
#include <stdlib.h>
#include "gotoxy.h"
#include "colores.h"
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void dibujar_marco();

int main(int argc, char *argv[]) {
	system("portada.exe");
	
	system("cls");
	
	system("color 7");
	
	color(1,7);
	dibujar_marco();
	
	
	getch();
	return 0;
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
