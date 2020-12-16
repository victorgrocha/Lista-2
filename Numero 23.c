#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "Portuguese");
	int n=0,m=0,l,c,numAleatorio;
  
  do{
    
		if(n>=101 || m>=101){
			printf("\nO tamanho máximo é 100! \nTente outra vez\n\n");
			printf("\nDigite o número de linhas(N):\n");
    	scanf("%d",&n);
    	printf("\nDigite o número de colunas(M):\n");
      scanf("%d",&m);
		}else{
			printf("\nDigite o número de linhas(N):\n");
    	scanf("%d",&n);
	    printf("\nDigite o número de colunas(M):\n");
	    scanf("%d",&m);
		}
	
	}while(n>=101 || m>=101);
  
	
	
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
  printf("\n\nA diagonal Principal é :");
  	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
      if(l==c){
        printf("%d ",matriz[l][c]);
      }
			
		}

	}
    
return 0;
}
