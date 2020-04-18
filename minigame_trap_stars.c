//its_a_trap_bino.the_game_09.10.19

#include<stdio.h>
void main()
{

int repeat, chutini, chutfim, numrandom, tentativas=0;

srand(time(NULL));
numrandom = (rand() %100) +1; //1 até 100

//printf("%d \n",numrandom);

while (repeat==0){

tentativas++;

printf("|| Digite o Numero INICIO || \n");
scanf("%d", &chutini);
printf("|| Digite o Numero FIM || \n");
scanf("%d", &chutfim);


if((chutini==numrandom) && (chutfim==numrandom)){
	printf("ACERTOU MISERAVI! \n");
	repeat=1;
	printf("VOCE REALIZOU: %d TENTATIVAS",tentativas);
	} 
	
else if((numrandom >= chutini) && (numrandom <= chutfim))   printf("Estou Aqui no Meio: \n");
else if((numrandom <= chutini) && (numrandom >= chutfim))	printf("Estou Aqui no Meio: \n");
else printf("NAO ESTOU POR AQUI ! \n");

	}

}

=========================================================================

//allstars.the_game
#include<stdio.h>
void main()
{

int x, repeat, chutini, numrandom, tentativas=0;

srand(time(NULL));
numrandom = (rand() %96) +32; //32 até 128

//printf("%d \n",numrandom);

while (repeat==0){

tentativas++;

printf("\n ||| Digite valor entre 32 e 128 ||| \n");
scanf("%d", &chutini);

x=numrandom-chutini;

if	(chutini == numrandom){
	printf("\n ACERTOU MISERAVI! \n");
	repeat=1;
	printf("\n VOCE REALIZOU: %d TENTATIVAS", tentativas);	
}

if(x >=64) 		printf("* \n");
else if(x >=32) printf("** \n");
else if(x >=16) printf("*** \n");
else if(x >=8)  printf("**** \n");
else if(x >=4)  printf("***** \n");
else if(x >=2)  printf("****** \n");
else if(x >=1)  printf("******* \n");

	}
}

===================================================================================================================
//ambos os jogos com chamado via function void...();

#include<stdio.h>

void stars_game(){

int x, repeat, chutini, numrandom, tentativas=0;

srand(time(NULL));
numrandom = (rand() %96) +32; //32 até 128

//printf("%d \n",numrandom);

while (repeat==0){

tentativas++;

printf("\n ||| Digite valor entre 32 e 128 ||| \n");
scanf("%d", &chutini);

x=numrandom-chutini;

if	(chutini == numrandom){
	printf("\n ACERTOU MISERAVI! \n");
	repeat=1;
	printf("\n VOCE REALIZOU: %d TENTATIVAS \n", tentativas);	
}

if(x >=64) 		printf("* \n");
else if(x >=32) printf("** \n");
else if(x >=16) printf("*** \n");
else if(x >=8)  printf("**** \n");
else if(x >=4)  printf("***** \n");
else if(x >=2)  printf("****** \n");
else if(x >=1)  printf("******* \n");

	}
}

void its_atrap_game(){
	
int repeat, chutini, chutfim, numrandom, tentativas=0;

srand(time(NULL));
numrandom = (rand() %100) +1; //1 até 100

//printf("%d \n",numrandom);

while (repeat==0){

tentativas++;

printf("\n|| Digite o Numero INICIO ||");
scanf("%d", &chutini);
printf("\n|| Digite o Numero FIM ||");
scanf("%d", &chutfim);


if((chutini==numrandom) && (chutfim==numrandom)){
	printf("ACERTOU MISERAVI! \n");
	repeat=1;
	printf("VOCE REALIZOU: %d TENTATIVAS \n",tentativas);
	} 
	
else if((numrandom >= chutini) && (numrandom <= chutfim))   printf("Estou Aqui no Meio: \n");
else if((numrandom <= chutini) && (numrandom >= chutfim))	printf("Estou Aqui no Meio: \n");
else printf("NAO ESTOU POR AQUI ! \n");

	}

}




void main(){
	
int op=989819;


while(op!=0) {
	
printf ("\n### MENU ###");
printf("\nChoose your Game Option Below: \n");
printf("\n1 Stars the Game	\n2 It's a Trap the Game");
printf("\nDigite sua opcao ou [0] para SAIR \n");
scanf("%d", &op);

switch (op){
	
case 0:
break;
case 1: stars_game();
break;
case 2: its_atrap_game();
break;
deafault: printf("\nERROR * PLEASE TRY AGAIN!");	
	}
}

}





