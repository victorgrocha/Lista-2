/*
Escrever um programa C que gere uma matriz de N Linhas x M Colunas e apresente sua diagonal secundaria
*/

#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
	
setlocale(LC_ALL, "Portuguese");

	int n=0,m=0,l,c,numAleatorio;

			printf("\nDigite o número de linhas(N):\n");
    	scanf("%d",&n);
	    printf("\nDigite o número de colunas(M):\n");
	    scanf("%d",&m);

	int matriz[n][m];
	
	printf("\nGerando matriz:\n\n");
	
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
      numAleatorio = rand() % 10;
			printf("%d ",numAleatorio);
			matriz[l][c]=numAleatorio;
		}
    printf("\n");
	}
	
	printf("\nA matriz gerada foi:\n\n");
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("%d  ",matriz[l][c]);
		}
		printf("\n");
	}
  printf("\n\nA diagonal Secundaria é :");
  	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
      if(l==c){
        printf("%d ",matriz[l][m-c-1]);
      }
			
		}

	}
    
return 0;
}
