#include <stdio.h>
#include <ctype.h> 
// funcao isacii() retorna um valor booleano
//funcao toascii() converte para código ASCII
 main(){
	char caracter;
	char toascii;
	printf("Digite um caracter para saber seu codigo ASCII em octal, decimal e hexadecimal :\n");
	scanf("%c",&caracter);		
	if (isascii(caracter)) {
    		printf("O codigo ASCII de %c e %d (octal), %d (decimal) e %x (hexadecimal).\n",caracter, toascii(caracter), toascii(caracter), toascii(caracter));
  	}else {
    		printf("O caracter %c nao e um caracter ASCII\n", caracter);
  	}
}
