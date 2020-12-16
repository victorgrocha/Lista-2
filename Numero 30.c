#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "Portuguese");
	
	int n=4,m=3,l,c;

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

  printf("\n\nA matriz transposta é :\n\n");
	for(l=0;l<m;l++){
		for(c=0;c<n;c++){
      printf("%d ",matriz[c][l]);
		}
    printf("\n");
	}
  
    
return 0;
}
