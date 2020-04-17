//trabalhando com vetores (treino)

float avrg, total;	
int i, cont;
float notas[3] = {0};

printf("set three grades bellow: \n");	

for(i=0; i<3; i++){
scanf("%f", &notas[i]);
}

printf("\nvalor primeira nota: %.2f \n", notas[0]);
printf("valor primeira nota: %.2f \n", notas[1]);
printf("valor primeira nota: %.2f \n", notas[2]);	
	

//**abaixo fixa o enhanced for para realizar o cálculo de somatoria e média
for (cont=0; cont<3; cont++ )
total += notas[cont];

avrg = total/3;

/*posso ativar a linha debaixo e desativar a linha de cima para gerar o mesmo efeito de calculo*/

//avrg = (notas[0]+notas[1]+notas[2])/3;

printf("\nmedia total =  %f", avrg);

==========================================================================

//solicitando insert de vetores para usuario

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>


int main(void) {
		
	srand(time(NULL));
	int i, scn, scn2, vetor[scn];
	
	printf("Insira tamanho de vetor[]: ");
	scanf("%d", &scn);
	
	printf("Insira range de numeros: ");
	scanf("%d", &scn2);
	 
	for(i=0; i<scn; i++){
		vetor[i] = (rand() % scn2)+1;
		printf("%d, ", vetor[i]);
	}

	return 0;	
}

==========================================================================

/Exercício 001:

Crie um programa que adicione 20.000 números aleatórios em um vetor dinâmico 
Imprima a quantidade de memoria utilizada:

antes da inserção
ao final da inserção
e após liberar a memória

	
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>


int main(void) {
	
	srand(time(NULL));
	int random = rand() % 20000;
	
	//printf("numero random eh: %d \n\n", random);
	
	int *vetor;
	
	printf("valor em memoria ANTES: %d \n", sizeof *vetor);
	
	vetor = (int*)malloc(random*sizeof(int));
	
	if(vetor==NULL){
		printf("memoria insuficiente \n");
		exit(1);
	}
	
	printf("valor em memoria DEPOIS: %d \n", sizeof *vetor);
	
	void free(void *vetor);
	
	printf("valor em memoria APOS O FREE: %d \n", sizeof *vetor);
	
	return 0;
}