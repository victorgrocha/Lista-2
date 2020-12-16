#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
	
setlocale(LC_ALL, "Portuguese");
	
	int n=0,m=0,l,c,e;
  
 
	printf("\nDigite o número de linhas(N):\n");
	scanf("%d",&n);
  printf("\nDigite o número de colunas(M):\n");
  scanf("%d",&m);
  printf("\nDigite o que vai multiplicar a matriz:\n");
  scanf("%d",&e);

	
	
	int matriz[n][m];
	
	printf("\nDigite os valores da matriz:\n\n");
	
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("\nmatriz1[%d][%d]=",l,c);
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

  printf("\n\nA matriz multiplicada é \n\n");
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
      printf("%d ",matriz[l][c]*e);
		}
    printf("\n");
	}


return 0;
}
