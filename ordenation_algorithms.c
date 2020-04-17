#include <stdio.h>
#include <stdlib.h>
#define TAM 10

//abaixo segue funcoes dos algoritmos de ordenacao

//func insertion sort
void insertion_sort(int vetor[TAM]){
	
	
	int i, j, aux;
	int iterance =0;
	
	for(i=0; i<TAM-1; i++){
		for(j=i+1; j>=0; j--){
			if(vetor[j] < vetor[j-1]){
				aux = vetor[j];
				vetor[j] = vetor[j-1];
				vetor[j-1] = aux;
			}	
			else
				break;		
		}iterance++;	
	}	//verificando quantidade de iteracoes (comparacoes) no vetor
		printf("\ntotal de futuras iteracoes = [%d]\n", iterance);





}

//func bubble sort
void bubble_sort(int vetor[TAM]){
	
	int i, j, aux;
	int iterance=0;
		
	for(i=0; i<TAM; i++){
		for(j=0; j <TAM-1; j++){
			if(vetor[j] > vetor[j+1]){
				aux = vetor[j];
				vetor[j] = vetor[j+1];
				vetor[j+1] = aux;
			} iterance++;	
		}	 
	}	//verificando quantidade de iteracoes (comparacoes) no vetor
		printf("\ntotal de futuras iteracoes = [%d]\n", iterance);
		
	
}

//func selection sort
void selection_sort(int vetor[TAM]){
	
	
	int i, j, min, aux;
	int iterance=0;
	
	for(i = 0; i < TAM-1; i++){
		min = i;
		for(j = i+1; j < TAM; j++){
			if(vetor[j] < vetor[min])
			min = j;
		}	//condicional para forcar ordenacao de valores similares 
			if (i!=min){
			
			aux = vetor[i]; 
			vetor[i] = vetor[min]; 
			vetor[min] = aux;
			}iterance++;
		} 	
			//verificando quantidade de iteracoes (comparacoes) no vetor
			printf("\ntotal de futuras iteracoes = [%d]\n", iterance);
	}
	
//func quick sort
void quick_sort(int vetor[TAM], int inicio, int fim ){
	
	
	int iterance=0;
	
	 int pivo, aux, i, j, meio;
   
   i = inicio;
   j = fim;
   
   meio = (int) ((i + j) / 2);
   pivo = vetor[meio];
   
   do{
      while (vetor[i] < pivo) i = i + 1;
      while (vetor[j] > pivo) j = j - 1;
      
      if(i <= j){
         aux = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = aux;
         i = i + 1;
         j = j - 1;
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
		vetor[i] = (rand() % TAM)+1;
		printf("%d, ", vetor[i]);
	}
	
}

//func usuario insere tamanho de vetor randomico
void vetor_user(int vetor[]){
	
	srand(time(NULL));
	int i, scn;
	
	printf("Insira tamanho de vetor[]: ");
	scanf("%d", &scn);
	 
	for(i=0; i<scn; i++){
		vetor[i] = (rand() % scn)+1;
		printf("%d, ", vetor[i]);
	}
	
	
}


void main(){
	
	//vetor padraozera
	//int vetor[] = {8,2,1,4,3,9,10,5,7,6};
	
	//vetor para selection_sort **************
	//int vetor[] = {330,108,383,362,269,175,276,301,387,422,328};
	
	//vetor randomico **************
	//vetor_rand(vetor);
	
	//user insere tamanho do vetor randomico **************
	//vetor_user(vetor);
	
	
	
	
/*	
	//inserindo valores no vetor

	int vetor[TAM], i, aux, cont;
	
	printf("Insira valores para vetor: \n");
	for(i=0; i<TAM; i++){
		scanf("%d", &vetor[i]);
	}	

*/
	
	//antes da ordenacao **************
	printVetor(vetor);
	
	//utilizando o bubble sort **************
	//bubble_sort(vetor);
	
	//utilizando o insertion sort **************
	insertion_sort(vetor);
	
	//utilizando o selection sort **************
	//selection_sort(vetor);
	
	//utilizando o quick sort **************
	//quick_sort(vetor,0,TAM);
	
	//apos a ordenacao **************
	printVetor(vetor);
	
	//verificando total de iteracoes no vetor **************
	total_iteracoes();
	

	

}
