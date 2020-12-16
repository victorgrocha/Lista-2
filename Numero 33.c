#include<stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int m[2][3],n[3][2],mult[2][2],l,c,k;
	
	printf("Digite a matriz 1 (M 2x3):\n\n");
	for(l=0;l<2;l++){
		for(c=0;c<2;c++){
   			mult[l][c]=0;
		}
	}
	for(l=0;l<2;l++){
		for(c=0;c<3;c++){
			printf("[%d][%d]=",l,c);
			scanf("%d",&m[l][c]);
		}
	}
	
	printf("\n");
	
	for(l=0;l<2;l++){
		for(c=0;c<3;c++){
			printf("%d ",m[l][c]);
		}
		printf("\n");
	}
	
	printf("Digite a matriz 2 (N 2x3):\n\n");
	
	for(l=0;l<3;l++){
		for(c=0;c<2;c++){
			printf("[%d][%d]=",l,c);
			scanf("%d",&n[l][c]);
		}
	}
	
	printf("\n");
	
	for(l=0;l<3;l++){
		for(c=0;c<2;c++){
			printf("%d ",n[l][c]);
		}
		printf("\n");
	}	

	for(l=0;l<2;l++){
		for(c=0;c<2;c++){
			for(k=0;k<3;k++){
				mult[l][c]=mult[l][c]+m[l][k]*n[k][c];
			}
		}
	}
	printf("\n-----------------------------\n\n");
	
	for(l=0;l<2;l++){
		for(c=0;c<3;c++){
			printf("%d  ",m[l][c]);
		}
		printf("\n");
	}
	
	printf("\n\n*\n\n");
	
	for(l=0;l<3;l++){
		for(c=0;c<2;c++){
			printf("%d  ",n[l][c]);
		}
		printf("\n");
	}
	printf("\n\n=\n\n");
	for(l=0;l<2;l++){
		for(c=0;c<2;c++){
			printf("%d ",mult[l][c]);
		}
		printf("\n");
	}
	
		
		
    
return 0;
}
