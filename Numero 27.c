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
  int matriz2[n][m];

	printf("\nDigite os valores da matriz 1:\n\n");
	
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("\nmatriz1[%d][%d]=",l,c);
			scanf("%d",&matriz[l][c]);
			
		}
	}
	
	printf("\nA matriz 1 digitada foi:\n\n");
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("%d  ",matriz[l][c]);
		}
		printf("\n");
	}

  printf("\nDigite os valores da matriz 2:\n\n");
	
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("\nmatriz[%d][%d]=",l,c);
			scanf("%d",&matriz2[l][c]);
			
		}
	}
	
	printf("\nA matriz 2 digitada foi:\n\n");
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("%d  ",matriz2[l][c]);
		}
		printf("\n");
	}
	
  printf("\n----------------\n\n");

  for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("%d  ",matriz[l][c]);
		}
		printf("\n");
	}

  printf("\n+\n\n");

  for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("%d  ",matriz2[l][c]);
		}
		printf("\n");
	}

  printf("\n=\n\n");

 for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("%d  ",matriz2[l][c]+matriz[l][c]);
		}
		printf("\n");
	}

  printf("\n");

	
    
return 0;
}
