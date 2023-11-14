#include <stdio.h>
int main(void){
	int contador;
	char vetorAlfabeto[5] = {'a','e','i','o','u'};
	for(contador = 0; contador <= 5; contador++){
		printf("%c \n",vetorAlfabeto[contador]);
	}
}
