/*
 ============================================================================
 Name        : Convertidor.c
 Author      : Felitti Renzo
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Convertidor a Farenheit in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

 void imprimirTabla(int array[] , int size){

	 printf("Celcius a Farenheit\n\n");
	 int farenheit=0;
	 int i=0;

	 while(i<size){
		 farenheit=((array[i] * 9)/5) + 32;
		 printf("%d  ---> %d\n",array[i],farenheit);
		 i++;
	 }
}

int main() {

	int gradosCelcius[] ={0,20,40,60,80,100,120,140,160,180,200,220,240,260,280,300};

	int size = sizeof(gradosCelcius)/sizeof(int);

	imprimirTabla(gradosCelcius,size);


	return 0;
}

