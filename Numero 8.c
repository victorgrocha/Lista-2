/*
Ler N elementos de um vetor A e um valor X. Criar o vetor B contendo os elementos do vetor A
multiplicados por X
*/

#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
	
	int tamanho = 0,k,x;
	setlocale(LC_ALL, "Portuguese");
	printf("Qual o tamanho dos vetores?\n");
	scanf("%i",&tamanho);
	printf("\n\nDigite o valor que ser� utilizado na multiplica��o:\n");
	scanf("%d",&x);
	
	int vetor1[tamanho],vetor2[tamanho];


	printf("\n\nDigite os valores do vetor:\n\n");
	for(k=0;k<tamanho;k++){
		printf("[%d] = ",k);
		scanf("%i",&vetor1[k]);
	}

    printf("\n\nMultiplica��o:\n");
	for(k=0;k<tamanho;k++){
		vetor2[k] = vetor1[k]*x;
		printf("\n%d * %d = %d",vetor1[k],x,vetor2[k]);
	}
	
	printf("\n\nVetor resultante:\n\n");
	
	for(k=0;k<tamanho;k++){
		printf("[%d] = %d\n",k,vetor2[k]);
	}
	
	
    return 0;
}
