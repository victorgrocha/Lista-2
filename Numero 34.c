#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

void diaSobrecarregado(int matriz[6][7]){
	
	int l,c,soma[7],maior=0,pmaior;
	char *dias[7]={"SEG","TER","QUA","QUI","SEX","SAB","DOM"};
	for(l=0;l<7;l++){
		soma[l]=0;	
	}
	
	for(l=0;l<6;l++){
		for(c=0;c<7;c++){
			//printf("\n%d",matriz[l][c]);
			soma[c]=matriz[l][c]+soma[c];
		}
	}
	
	/*printf("--soma:\n");
	for(l=0;l<7;l++){
		printf("--soma[%d]:%d\n",l,soma[l]);
	}*/
	
	maior=soma[0];
	pmaior=0;
	for(l=0;l<7;l++){
		if(soma[l]>maior){
			maior=soma[l];
			pmaior=l;
		}
	}
	printf("\n\nO dia em que voçê está mais sobrecarregado é na(o) %s com %d horas de estudo.",dias[pmaior],maior);
	
}

void disciplinaMaisEstudada(int matriz[6][7]){
	int l,c,soma[6],maior=0,pmaior;
	char *disc[6]={"D1","D2","D3","D4","D5","D6"};
	for(l=0;l<6;l++){
		soma[l]=0;	
	}
	
	for(l=0;l<6;l++){
		for(c=0;c<7;c++){
			//printf("\n%d",matriz[l][c]);
			soma[l]=matriz[l][c]+soma[l];
		}
	}
/*	
	printf("--soma:\n");
	for(l=0;l<6;l++){
		printf("--soma[%d]:%d\n",l,soma[l]);
	}
*/
	maior=soma[0];
	pmaior=0;
	
	for(l=0;l<6;l++){
		if(soma[l]>maior){
			maior=soma[l];
			pmaior=l;
		}
	}
	printf("\n\nO a disciplina mais estudada extraclasse é %s com %d horas de estudo.",disc[pmaior],maior);
}

void mediaDia(int matriz[6][7]){
	int l,c;
	float soma=0;
	
	for(l=0;l<6;l++){
		for(c=0;c<7;c++){
			soma=matriz[l][c]+soma;
		}
	}
	
	printf("\n\nVoçê tem estudado em média %.2f horas por dia.",(soma/7));
}

void mediaFS(int matriz[6][7]){
	int l,c;
	float soma=0;
	
	for(l=0;l<6;l++){
		for(c=0;c<7;c++){
			if(c==5 || c==6){
				soma=matriz[l][c]+soma;
			}
			
		}
	}
	
	printf("\n\nVoçê tem estudado em média %.2f horas no final de semana.",(soma/2));
}

void hotasDisc(int matriz[6][7]){
	int l,c,soma[6];
	char *disc[6]={"D1","D2","D3","D4","D5","D6"};
	
	for(l=0;l<7;l++){
		soma[l]=0;	
	}
	
	for(l=0;l<6;l++){
		for(c=0;c<7;c++){
			//printf("\n%d",matriz[l][c]);
			soma[l]=matriz[l][c]+soma[l];
		}
	}
	
	/*printf("--soma:\n");
	for(l=0;l<6;l++){
		printf("--soma[%d]:%d\n",l,soma[l]);
	}
	*/
	for(l=0;l<6;l++){
		printf("\n%s: %d horas",disc[l],soma[l]);
	}
	
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n=6,m=7,l,c;
	char *disc[6]={"D1","D2","D3","D4","D5","D6"};
	char *dias[7]={"SEG","TER","QUA","QUI","SEX","SAB","DOM"};
	char opcao[1];

	int matriz[n][m];
	
	printf("\nInforme os dados:\n\n");
	
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("\nQuantas horas pretende estudar a disciplina %s na(o) %s: ",disc[l],dias[c]);
			scanf("%d",&matriz[l][c]);
			
		}
	}
	
	
	printf("\nDisciplina X Dia da Semana:\n\n");
	printf("  SEG  TER  QUA  QUI  SEX  SAB  DOM\n");
	for(l=0;l<n;l++){
		printf("%s  ",disc[l]);
		for(c=0;c<m;c++){			
			printf("%d  ",matriz[l][c]);
		}
		printf("\n");
	}
	printf("\n\nEscolha uma ação:");
	printf("\nea Qual o dia da semana em que você está mais sobrecarregado?\nb Qual disciplina mais estuda extraclasse?\nc Em média, quantas horas você tem estudado por dia?\nd Qual sua média de estudos nos finais de semana?\ne Quantas horas por semana você tem dedicado para estudar cada disciplina?\n");
	scanf("%s",&opcao[0]);

	switch(opcao[0]){
		case 'a':
			diaSobrecarregado(matriz);
			break;
			
		case 'b':
			disciplinaMaisEstudada(matriz);
			break;
			
		case 'c':
			mediaDia(matriz);
			break;
			
		case 'd':
			mediaFS(matriz);
			break;
			
		case 'e':
			hotasDisc(matriz);
			break;		
	}

  
    return 0;
}
