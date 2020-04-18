//num aleatório (gerar um numero aleatorio de 0 até 99)

srand(time(NULL));
int num;
num = rand() % 100; // resto da divisão de 0 até 99
printf ("O numero aleatorio eh %d ", num);

=====================================

//aqui você da um limite para o num random começar 
//exemplo: gerar um numero aleatorio de 32 até 150
srand(time(NULL));
int num;
num = (rand() % 119) +32; // 32 até 150
// 0 + 32 =32
// 118 + 32 = 150
printf ("O numero aleatorio eh %d ", num);



=====================================

//jogo acerte o numero 

int numSorteado, vida=3, chute, acertou=0;

srand(time(NULL));
numSorteado = (rand() %10) +1; //1 até 10

//printf("numero sorteado eh %d ",numSorteado);

printf("voce tem 3 vidas... \n");

while ((acertou==0) && (vida>0) ){
	
	printf("Digite um Numero entre [1 - 10]");
	scanf("%d", &chute);
	vida--;
	
	if(chute == numSorteado)
	{
		printf("You Win!");
		acertou=1;
	}
	else if (vida>0) 	printf("Tente outra vez! \n");
	 else 				printf("You Loose | Game Over");
}

=================================

//raciocinio para exercicio de jogo das estrelas
x = sort-chute;

if (x<0) x=x*-1;


if(x==1) printf("******* \n");
else if (x>2)


=================================