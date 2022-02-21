#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(){
	//reserva dinamica memoria 
	char aux[10];//reservo una variable auxiliar 
	int longitud;//defino el tamaño 
	char *lista[3];
	int cont;
	for(cont=0;cont<3;cont++){
		//leo el nombre 
		printf("\nDime en nombre del rey %d: ",cont);
		//2 lo guardo en una variable auxiliar
		scanf("%s",aux);
		//3. cuento el numero de letras
		longitud=strlen(aux);
		//4 busco en huevo en la memoria de ese tamaño y me apunto su direccion
		lista[cont]=(char *)malloc(longitud*sizeof(char));
		//5. copio el nombre desde auxiliar hasta el hueco encontrado
		strcpy(lista[cont],aux);	
	
	
	}
	printf("\n Los tres reyes magos son: "); //contiene spoilers 
	for(cont=0;cont<3;cont++){
		printf("\n %s",lista[cont]);
	}
	return(0);
}
