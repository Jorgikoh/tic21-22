#include<stdio.h>

int main(){
	float x[10];
	int cont;
	float suma=0;
	float media;
	//for cont in range(1.10):
	//cont++ equivale a cont=cont+1
	/*while(cont<=10){
	...
	cot++*/
	
	for(cont=0;cont<10;cont++){
		//num=input("dame un numero: ")//
		printf("dame un numero: ");
		scanf("%f",&x[cont]);
	}
	for(cont=0;cont<10;cont++){
		printf("\n%f",x[cont]);
		suma=suma+x[cont]; 
		//suma+=x[cont];
	}
	media=suma/cont;
	printf("\nLa media vale= %.2f",media);
	return(0);
}
