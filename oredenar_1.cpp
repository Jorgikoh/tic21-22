#include<stdio.h>
//ordenar una lista de numeros por el metodo de la burbuja
int main(){
	int numeros[5];
	int cont;
	int aux;
	int repetir;
	//leo la lista
	for(cont=0;cont<5;cont++){
		printf("\nDame un numero: ");
		scanf("%d",&numeros[cont]);
	}
	//la muestro por parntalla 
	printf("\nLista de numeros: ");
	for(cont=0;cont<5;cont++){
		printf("%d",numeros[cont]);
	}
	//al ordeno de menor a mayor
	for(repetir=1;repetir<5;repetir++){
	
	for(cont=0;cont<=3;cont++){
		if(numeros[cont]>numeros[cont+1]){
			aux=numeros[cont];
			numeros[cont]=numeros[cont+1];
			numeros[cont+1]=aux;
		}
	
	
	
		}
	
	}
	//la vuelvo a mostrar 
	printf("\nLista ordenada: ");
	
	for(cont=0;cont<5;cont++){
		printf("%d",numeros[cont]);
	}
	return(0); 
	
	
	
}
