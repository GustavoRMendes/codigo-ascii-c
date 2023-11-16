#include <stdio.h>
int main(void){
  char operacao;
  double n1,n2,soma,sub,mul,div = 0;
  printf("Escolha a operacao (+ - / *) : \n");
  scanf("%c",&operacao);
  printf("Digite o primeiro numero: \n");
  scanf("%lf",&n1);
  printf("Digite o segundo numero:\n");
  scanf("%lf",&n2);
  switch(operacao){	
	case '+': 
	  soma = n1 + n2;
	  printf("A soma entre %.0lf + %.0lf = %.0lf",n1,n2,soma);
	  break;
	case '-':
	  sub = n1 - n2;
	  printf("A subtracao entre %lf - %lf = %lf ",n1,n2,sub);
	  break;
	case '*': 
	  mul = n1 * n2;
	  printf("A multiplicacao entre  %lf x %lf = %lf ",n1,n2,mul);
	  break;
	case '/': 
	  div = n1 / n2;
	  printf("A divisao entre %lf / %lf = %lf",n1,n2,div);
	  break;
	default:
	  printf("[ERRO] TENTE NOVAMENTE!");
  }
}
