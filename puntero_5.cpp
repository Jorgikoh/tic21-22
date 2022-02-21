#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(){
	//reserva dinamica memoria 
	char aux[10];//reservo una variable auxiliar 
	int longitud;//defino el tamaño 
	char *mispalabras[5];
	int cont;
	for(cont=0;cont<5;cont++){
		//pido la palabra
		printf("\nDime la palabra %d: ",cont);
		//2 lo guardo en una variable auxiliar
		scanf("%s",aux);
		//3. cuento el numero de letras
		longitud=strlen(aux);
		//4 busco en huevo en la memoria de ese tamaño y me apunto su direccion
		mispalabras[cont]=(char *)malloc(longitud*sizeof(char));
		//5. copio el nombre desde auxiliar hasta el hueco encontrado
		strcpy(mispalabras[cont],aux);	
	
	
	}
	printf("\n las 5 palabras son : "); //contiene spoilers 
	for(cont=0;cont<5;cont++){
		printf("\n %s",*(mispalabras+cont));
		//sustituyo mispalabraas[cont] por *(mispalabras+cont)
		
	}
	return(0);
}
