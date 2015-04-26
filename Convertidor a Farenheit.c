/*
 ============================================================================
 Convertidor a Farenheit in C, Ansi-style
 Felitti Renzo
 13/4/2015 
 ============================================================================
 */

#include <stdio.h>


int main() {


	 printf(" Celcius a Farenheit\n\n");
	 int farenheit;

	 for(farenheit=0; farenheit<=300 ; farenheit ++){

		 printf("%3d°C  ----> %.2f°F \n",farenheit, (9.0/5.0) * farenheit  + 32);
	 }


	return 0;
}

