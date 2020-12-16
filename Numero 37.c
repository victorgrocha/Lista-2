#include<stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n=12,m=12,l,c;
	float matriz[n][m],soma=0;
	char opcao[1];
	scanf("%c",&opcao[0]);

	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			scanf("%f",&matriz[l][c]);
		}
	}
	
	if(opcao[0] == 'S'){
		for(l=0;l<n;l++){
			for(c=0;c<m;c++){
				if(c>l){
					soma+=matriz[l][m-c-1];
				}
			}
		}
		printf("\n%.2f",soma); 
	}else if(opcao[0]=='M'){
		for(l=0;l<n;l++){
			for(c=0;c<m;c++){
				if(c>l){
					soma+=matriz[l][m-c-1];
				}
			}
		}
		printf("\n%.2f",soma/66); 
	}
	
    
return 0;
}
