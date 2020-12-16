#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	

setlocale(LC_ALL, "Portuguese");
	int k;
	char linha[1000];
	gets(linha);
	
	for(k=0;k<strlen(linha);k++){
		if(linha[k]!='p'){
			printf("%c",linha[k]);
		}
		
	}
	
 return 0;
}
