#include<stdio.h>

int main(){
	int x[10];
	int cont;
	//for cont in range(1.10):
	//cont++ equivale a cont=cont+1
	/*while(cont<=10){
	...
	cot++*/
	
	for(cont=0;cont<=10;cont++){
		//num=input("dame un numero: ")//
		printf("dame un numero: ");
		scanf("%d",&x[cont]);
	}

	
	return(0);
}
