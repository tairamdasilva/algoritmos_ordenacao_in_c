#include<stdio.h>

void main (void) {

    int a=0,b=0,c=0,d=0, op=910910910;

    while (op !=0){
        printf("\n===MENU===\n");
        printf("\n1 BatmanvsSuperman	\n2 Joker	\n3 Aquaman \n===\n4 NA-NULO \n");
        printf("\nDigite sua Opcao ou [0] para SAIR \n");
        scanf("%d",&op);

    switch(op) {
        
        case 0:
        break;
        case 1: a++;
        break;
        case 2: b++;
        break;
        case 3: c++;
        break;
        case 4: d++;
        break;
        default: printf("Opcao Invalida \n");
        
        }	
    }

    printf("\n=============RESULTADO=============\n");

    printf("\nBatmanvsSuperman 01 --> %d votos", a);
    printf("\nJoker 02 --> %d votos", b);
    printf("\nAquaman 03 --> %d votos", c);
    printf("\nVOTOS NULOS  --> %d votos \n", d);


    if(a>b && a>c && a>d) printf("\nBVS ganhou!");
    else if (b>a && b>c && b>d) printf("\nJOKER ganhou!");
    else if (c>a && c>b && c>d) printf("\nAQUAMAN ganhou!");
    else if (d>a && d>b && d>c) printf("\nNULOS ganhou! FACA OUTRA ELEICAO");
    else  printf("\nEMPATOU");



}