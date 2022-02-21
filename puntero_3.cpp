#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(){
	//reserva dinamica de memoria 
	char aux[100];//reservo una variable auxiliar para guardar de momento una palabra
	int longitud;//defino el tamano
	printf("\nDime una palabra: ");
	scanf("%s",aux);
	longitud=strlen(aux);
	char *palabra;//palabra es un puntero que contiene una direccion de memoria de algo que es una letra
	palabra= (char*) malloc(longitud*sizeof(char));
	strcpy(palabra,aux);
	printf("\nResultado: ");
	printf("%s",palabra);
	return(0);
}
