#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(){
	//reserva dinamica memoria 
	char provisional[10];
	char *aux;//reservo una variable auxiliar 
	int longitud;//defino el tamaño 
	char *mispalabras[5];
	int cont;
	int repetir;
	for(cont=0;cont<5;cont++){
		//pido la palabra
		printf("\nDime la palabra %d: ",cont);
		//2 lo guardo en una variable auxiliar
		scanf("%s",provisional);
		//3. cuento el numero de letras
		longitud=strlen(provisional);
		printf("\n mide %d",longitud);
		//4 busco en huevo en la memoria de ese tamaño y me apunto su direccion
		mispalabras[cont]=(char *)malloc(longitud*sizeof(char));
		//5. copio el nombre desde auxiliar hasta el hueco encontrado
		strcpy(mispalabras[cont],provisional);	
	
	
	}
	printf("\n las 5 palabras son : "); //contiene spoilers 
	for(cont=0;cont<5;cont++){
		printf("\n %s",*(mispalabras+cont));
		//sustituyo mispalabraas[cont] por *(mispalabras+cont)
		
	}
	//las ordeno por orden alfabetico
		for(repetir=1;repetir<5;repetir++){
	
			for(cont=0;cont<=3;cont++){
				if(strlen(mispalabras[cont])>strlen(mispalabras[cont+1])){
					aux=mispalabras[cont];
					mispalabras[cont]=mispalabras[cont+1];
					mispalabras[cont+1]=aux;
				}
	
	
	
			}
	
		}
		printf("\n las 5 palabras son : "); //contiene spoilers 
		for(cont=0;cont<5;cont++){
			printf("\n %s",*(mispalabras+cont));
}
	return(0);
}
