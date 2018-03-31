/*
Autor: Edgardo Adrián Franco Martínez
Versión 1.1 (02 de Octubre de 2013)
Descripción: Cabecera de la libreria para recrear presentaciones más agradables al usuario en el modo consola bajo Windows
Observaciones: Esta implementación de la libreria solo es compatible con Windows y el compilador MinGW ya que utiliza la libreria "windows.h", la cuál no es estandar.
Compilación de la libreria: Windows (gcc -c presentacionWin.c)
*/
//LIBRERIAS
#include <windows.h>
#include"presentacion.h"

//DEFINICIÓN DE FUNCIONES

//Función para esperar un tiempo en milisegundos, simulación de la función delay() que se tenia en borland 3.0 en la libreria conio.h
void EsperarMiliSeg(int t)
{
	Sleep(t);
	return;
}


