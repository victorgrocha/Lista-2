/*
Utilizando a função criada acima, dada uma matriz real NxM, verificar se existem elementos repetidos na
mesma. Mostrar os valores repetidos.
*/

void buscaNumero(int n,int m,int matriz[n][m]){
	
	int l,c;
	printf("\n\n");
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			if(matriz[l][c]==matriz[l][c] && l!=c){
				printf("\n%d",matriz[l][c]);
			}
		}
	}
	
}


#include<stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	int n,m,l,c;
	
	
	printf("\nDigite o número de linhas(N):\n");
	scanf("%d",&n);
	printf("\nDigite o número de colunas(M):\n");
	scanf("%d",&m);

	
	int matriz[n][m];
	
	printf("\nDigite os valores da matriz:\n\n");
	
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("\nmatriz[%d][%d]=",l,c);
			scanf("%d",&matriz[l][c]);
		}
	}
	
	printf("\nA matriz digitada foi:\n\n");
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("%d  ",matriz[l][c]);
		}
		printf("\n");
	}
	buscaNumero(n,m,matriz);
	
	
	
return 0;
}
