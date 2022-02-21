#include<stdio.h>

int main(){
	char letras[10];
	int cont;
	

	//leo datos 
	for(cont=0;cont<10;cont++){
		//num=input("dame un numero: ")//
		printf("introduce la letra %d : ",cont);
		scanf(" %c",&letras[cont]);
	}
	printf("\nHas ESCRITO LA PALABRA: ");
	for(cont=0;cont<10;cont++){
		printf("%c",letras[cont]);
		 
	}

	return(0);
}
