#include<stdio.h>
#include <locale.h>

int main(){
	
setlocale(LC_ALL, "Portuguese");
	
	int n,m,l,c;
  char opcao[1];

	printf("\nDigite o número de linhas(N):\n");
	scanf("%d",&n);
	printf("\nDigite o número de colunas(M):\n");
	scanf("%d",&m);
	
	float matriz[n][m];
  float matriz2[n][m];

	printf("\nDigite os valores da matriz 1:\n\n");
	
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("\nmatriz1[%d][%d]=",l,c);
			scanf("%f",&matriz[l][c]);
			
		}
	}
	
	printf("\nA matriz 1 digitada foi:\n\n");
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("%f  ",matriz[l][c]);
		}
		printf("\n");
	}

  printf("\nDigite os valores da matriz 2:\n\n");
	
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("\nmatriz[%d][%d]=",l,c);
			scanf("%f",&matriz2[l][c]);
			
		}
	}
	
	printf("\nA matriz 2 digitada foi:\n\n");
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("%f  ",matriz2[l][c]);
		}
		printf("\n");
	}
	
  printf("\n----------------\n\n");

  printf("\nQual operção deseja fazer?\n");
	printf("a somar as duas matrizes\nb subtrair a primeira matriz da segunda\nc adicionar uma constante as duas matrizes\nd imprimir as matrizes.\n\n");

  scanf("%s",&opcao[0]);

 
  switch(opcao[0]){
    case 'a':
      for(l=0;l<n;l++){
	    	for(c=0;c<m;c++){
	      		printf("%f  ",matriz2[l][c]+matriz[l][c]);
	      }
	      	printf("\n");
	    }

        printf("\n");
        break;
    case 'b':
      for(l=0;l<n;l++){
	    	for(c=0;c<m;c++){
	      		printf("%f  ",matriz[l][c]-matriz2[l][c]);
	      }
	      	printf("\n");
	    }

      printf("\n");
      break;
    case 'c':
    printf("\nDigite uma constante:\n");
    float constante;
    scanf("%f",&constante);
      for(l=0;l<n;l++){
	    	for(c=0;c<m;c++){
	      		matriz[l][c]=matriz[l][c]+constante;
            matriz2[l][c]=matriz2[l][c]+constante;
	      }
	      	printf("\n");
	    }

      printf("\n\nMatriz 1:\n\n");
      for(l=0;l<n;l++){
        for(c=0;c<m;c++){
          printf("%f  ",matriz[l][c]);
        }
        printf("\n");
      }
      printf("\n\nMatriz 2:\n\n");
      for(l=0;l<n;l++){
        for(c=0;c<m;c++){
          printf("%f  ",matriz2[l][c]);
        }
        printf("\n");
      }

      printf("\n");
      break;
    case 'd':
      printf("\n\nMatriz 1:\n\n");
      for(l=0;l<n;l++){
        for(c=0;c<m;c++){
          printf("%f  ",matriz[l][c]);
        }
        printf("\n");
      }
      printf("\n\nMatriz 2:\n\n");
      for(l=0;l<n;l++){
        for(c=0;c<m;c++){
          printf("%f  ",matriz2[l][c]);
        }
        printf("\n");
      }
    break;

  }

    
return 0;
}
