#include<stdio.h>

//criando rotina
void soma(){
	
	int A,B;
	printf("Digite Numero A:" );
	scanf("%d", &A);
	printf("Digite Numero B: ");
	scanf("%d", &B);                                                                                       
	
	printf("A soma eh %d ", A+B);
	
} 

void aleatorio(){
	
	srand(time(NULL));
	int num;
	num = rand() % 100;
	printf("O numero aleatorio eh %d ", num);
	
} 

void loop(){
	
	int c;
	for (c=1; c<10; c++)
	 printf("\n BRAZA CINCO VEZES");
}

void main(){ 



int op=91901; //forçar entrada no while

while(op !=0){

	printf("\n\n MENU");
	printf("\n1-SOMAR	\n2-ALEATORIO	\n3-LOOP");
	printf("\nDigite sua opcao ou [0] para SAIR \n");
	scanf("%d", &op);
	
	switch(op){
		
		case 0:
		break;
		case 1: soma (); break;
		case 2: aleatorio (); break;
		case 3: loop (); break;
			default:	printf("OPCAO INVALIDA \n");
	}
		
	}
}