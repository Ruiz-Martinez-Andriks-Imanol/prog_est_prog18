/* Autor: Andriks Imanol Ruiz Martínez, Realizado: 28/02/2022
Escuela: Universidad del Valle de Mexico Campus Villahermosa
Materia: Programación Estructurada
Ciclo: 01/2022

Este es un programa de ciclos y condicionales en Lenguaje C de la materia de Programación Estructurada
Muestra el uso de:

    -Variables enteras
    -printf para mostrar mensajes
    -scanf
    -Funciones
    -Prototipos
    -El uso de include para las librerias
    -for
    -Contador en for 
    -Comentarios para la documentación interna del programa
*/
#include<stdio.h>
//Prototipo de funciones
void saludar();
//main
int main(){
	printf("Inicio el main...\n");
	saludar();
	printf("Termino el main.\n");
	saludar();
	for (int i=0;i<10;i++){
		saludar();
	}
	return 0;
}
//Funcion que imprime un saludo en un marco de asteriscos
void saludar(){
	printf("***********************************\n");
	printf("*	 H O L A	M U N D O !!!	*\n");
	printf("***********************************\n");
}
