#include<stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "Portuguese");

	int n,m,l,c,par=0,impar=0;
	printf("\nDigite o n�mero de linhas(N):\n");
	scanf("%d",&n);
	printf("\nDigite o n�mero de colunas(M):\n");
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
      if(matriz[l][c]%2==0){
        par++;
      }else{
        impar++;
      }
		}
		printf("\n");
	}
	printf("\nA matriz tem %d n�meros pares e %d n�meros impares.",par,impar);
	
    
return 0;
}
