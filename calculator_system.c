#include <stdio.h>
#include <locale.h>

void main(void) {
   setlocale (LC_ALL, "Portuguese");
   
	float a,b;
	char op;
	
	printf("Digite Primeiro Número: \n");
	scanf("%.4f", &a);
	
	printf("Digite Operador: [+], [-], [*], [/] \n");
	scanf("%s", &op);
	
	printf("Digite Segundo Número: \n");
	scanf("%.4f", &b);
	
	switch(op) {
		
		case '+': printf("%.4f + %.4f = %.4f \n",a,b, a+b);
		break;
		
		case '-': printf("%.4f - %.4f = %.4f \n",a,b, a-b);
		break;
		
		case '*': printf("%.4f * %.4f = %.4f \n",a,b, a*b);
		break;
		
		case '/': 	if (b ==0) {
					printf("ERROR - NÃO PODE DIVIR POR ZERO");
		}else
					printf("%.4f / %.4f = %.4f \n",a,b, a/b);
		break;
		
		default: printf("**===========Operador Inválido**===========");
    }

}
 


