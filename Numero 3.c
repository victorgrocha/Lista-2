#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
int main(){
	

int tamanho = 0,escolha=0,k, numAleatorio, impares=0;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Qual o tamanho do vetor?\n");
	scanf("%i",&tamanho);
	
	int vetor[tamanho];
	
	printf("\nEscolha entre Digitar ou Gerar o vetor:\n(1-Digitar) (2-Gerar)\n");
	
	
	do{
		if(escolha == 0){
			scanf("%i",&escolha);
		}else if(escolha != 1 && escolha != 2){
			printf("\nOp��o Invalida!\nTente outra vez\n");
			printf("\nEscolha entre Digitar ou Gerar o vetor:\n(1-Digitar) (2-Gerar)\n");
			scanf("%i",&escolha);
		}
	
	}while(escolha != 1 && escolha != 2);
	
	if(escolha == 1){
		printf("\n\nDigite os valores do vetor:\n\n");
		for(k=0;k<tamanho;k++){
			printf("[%d] = ",k);
			scanf("%i",&vetor[k]);
		}
	}else if(escolha == 2){
		printf("\n\nGerando os valores do vetor.\n\n");
		for(k=0;k<tamanho;k++){
			numAleatorio = rand() % 10;
			printf("[%d] = %d\n",k,numAleatorio);
			vetor[k] = numAleatorio;
		}
	}
	
	printf("\n\nO vetor cont�m os seguintes valores:\n\n");
	
	
	for(k=0;k<tamanho;k++){
		printf("[%d] = %d\n",k,vetor[k]);
		if(vetor[k]%2 != 0){
			impares++;
		}
			
	}
	
	printf("\n\nFoi encontrado um total de %d n�meros impares.",impares);
	printf("\n\nS�o eles:\n");
	
	for(k=0;k<tamanho;k++){
		
		if(vetor[k]%2 != 0){
			printf("[%d] = %d\n",k,vetor[k]);
		}
			
	}
		

	
	
	
    return 0;
}
