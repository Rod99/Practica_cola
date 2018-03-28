
#include <conio.h>
#include "gotoxy.h"
#include "colores.h"

/* LIBRERIA COLORES 
Colores :
BLACK			0 Negro
BLUE			1 Azul
GREEN			2 Verde
CYAN			3 Cían
RED				4 Rojo
MAGENTA			5 Magenta
BROWN			6 Marrón
LIGHTGRAY		7 Gris Claro
DARKGRAY		8 Gris Oscuro
LIGHTBLUE		9 Azul Claro
LIGHTGREEN		10 Verde Claro
LIGHTCYAN		11 Cían Claro
LIGHTRED		12 Rojo Claro
LIGHTMAGENTA	13 Magenta Claro
YELLOW			14 Amarillo
WHITE			15 Blanco
*/



main(){

system("color 18");




color(1,7);
gotoxy(55,14);printf("ESCOM IPN");
gotoxy(50,16);printf("ESTRUCTURAS DE DATOS");
gotoxy(46,18);printf("SMITTY WERBERJAGERMANJENSEN");
gotoxy(55,20);printf("TAD  COLA");
gotoxy(35,22);printf("NO CAMBIE EL TAMANIO DE VENTANA DURANTE LA EJECUCION");

getch();


}
