#include <stdio.h>
#include <stdlib.h>
#define TAM 10

	
	
//func quick sort
void quick_sort(int vetor[TAM], int inicio, int fim ){
	
	
	int iterance=0;
	
	int pivo, aux, i, j, meio;
   
   i = inicio;
   j = fim;
   
   meio = (int) ((i + j) / 2);
   pivo = vetor[meio];
   
   do{
      while (vetor[i] < pivo) i++;
      while (vetor[j] > pivo) j--;
      
      if(i <= j){
         aux = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = aux;
         i++;
         j--;
      }	
   }while(j > i);
   
   if(inicio < j) 	quick_sort(vetor, inicio, j);
   if(i < fim) 		quick_sort(vetor, i, fim);   

}	

//func imprimir vetor
void printVetor(int vetor[TAM]){	
	
	printf("\n=========================\n");
	
	int i;
	for(i=0; i<TAM; i++) {
		printf ("| %d ", vetor[i]);
	}
}

//func verificar total de iteracoes
void total_iteracoes(){

	int k, j;
	 for (k = 1; k < TAM; k++) {
	        	//printf("\n[%d] ", k); //quantidade de iteracoes para selecao em relacao ao vetor
	        for (j = 0; j < TAM-1; j++) {
	            //printf("%d, ", j);	//quantidade de checagens em relacao ao tamanho real do vetor
			}
		}
			printf("\ncasas que o vetor percorreu = [%d]", j);			
}

//func de vetor randomico
void vetor_rand(int vetor[TAM]){
	
	srand(time(NULL));
	
	int i;
	 
	for(i=0; i<TAM; i++){
		vetor[i] = (rand() % 50)+1;
		printf("%d, ", vetor[i]);
	}
	
}



void main(){
	
	//declaracao de vetor
	int vetor[TAM];
		
	//vetor randomico **************
	vetor_rand(vetor);
	
	//antes da ordenacao **************
	printVetor(vetor);
	
	//utilizando o quick sort **************
	quick_sort(vetor,0,TAM-1);
	
	//apos a ordenacao **************
	printVetor(vetor);
	
	//verificando total de iteracoes no vetor **************
	total_iteracoes();
	

	

}
