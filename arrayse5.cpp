#include<stdio.h>

int main(){
	char letras[5];
	int cont;
	
	
	
	//leo datos 
	for(cont=0;cont<5;cont++){
		//num=input("dame un numero: ")//
		printf("introduce la letra %d : ",cont);
		scanf(" %c",&letras[cont]);
	}
	//escribo la palabra al revés 
	for(cont=4;cont>=0;cont--){
		printf("%c",letras[cont]);
	}
		 
	

	return(0);
}
