//**parte_001 uma função de busca sequencial
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#define  TAMANHO 9

int main(void) {
	
	srand(time(NULL)) ;
	int x = (rand() % 250) +1;
	int vetor[x];
	
	/* checar se random esta funcionando 
	printf("NUMERO ALEAT AQUI: %d \n", x); */
	
	int i = 0;
	int valor = x;
	int encontrado = 0; //falso
	
	while (i < TAMANHO&& !encontrado) {
	if (vetor[i] == valor){
		encontrado = 1; /*true*/ 
	} else {
		i++;
	}
}

if (encontrado){
	printf("\nValor: %d esta na posicao %d", vetor[i], i);
 }else{
	printf("\nValor: %d nao encontrado", valor);
}

	
	return 0;
	
}

//**parte_002 uma função de busca binária
//**parte_003 a leitura de um número pelo usuário e exiba em qual posição encontra-se o número escolhido.
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#define  TAMANHO 9

int main(void) {
	
int direita, esquerda, meio;
int encontrado = 0; /*false*/ 
esquerda = 0;
direita = TAMANHO - 1;

srand(time(NULL));
int xXx = (rand() % 250) +1;
int vetor[xXx];
int valor;

//leitura de valor inserido pelo usuario
printf("informe valor para procura em vetor: ");
scanf("%d", &valor);

while(esquerda<=direita && !encontrado){
meio=(direita+esquerda)/2;
if (vetor[xXx] == valor)encontrado = 1; /*true*/
else if (valor < vetor[xXx]) direita = meio - 1;
else esquerda = meio + 1;
}

if(encontrado){
	printf ("Valor %d encontrado na posicao %d\n", vetor[xXx], meio);
}else{
	printf ("Valor %d nao encontrado\n", valor);
}

	return 0;
	
}