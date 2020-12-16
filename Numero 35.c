/*

35. Caçadores de Mito

Jorge é um apresentador de televisão que comanda a versão brasileira do grande sucesso Caçadores de Mitos, 
onde se estuda tum mito para descobrir se é fato ou apenas um boato. No próximo episódio, Jorge deverá apresentar 
o mito que diz que os raios não caem duas vezes no mesmo lugar”, referindo-se aos raios das tempestades de 
chuva. Para isso, foi até a cidade de Eletrolândia, que é a cidade com maior ocorrência de raios no mundo.
 O prefeito tem tanto orgulho desse titulo que mandou criar um sistema para registrar os raios.
  Jorge conseguiu um relatório com as ocorrencias de cada raio que caiu na cidade nos últimos anos.
O mapa de Eletrolandin é um retângulo. Parso sistema de registro a cidade é subdividida em quadrados de 
um metro de lado, denominados quadrantes. Assim, se a cidade tem 300 metros de largura e 1000 de comprimento,
 ela será subdividida em 300,000 quadrantes. O sistema de registro armazena o quadrante em que o raio calu.
  Cada quadrante é identificado pelas suas coordenadas X . Y conforme ilustra a figura abaixo, que exemplifica
   um mapa de uma cidade com oito metros de comprimento por cinco metros de largura (quarenta quadrantes).

Como os quadrantes são relativamente pequenos. Jorge decidiu que se dois raios caíram no mesmo quadrante.
pode-se considerar que caíram no mesmo lugar.

Tarefa
Sua missão é escrever um programa que receba as coordenadas dos raios que caíram em Eletrolândia nos últimos anos
 e determine se o mito estudado é realmente spenns um mito ou pode ser considerado verdade.
Entrada

A entrada contém um único conjunto de testes que deve ser lido do dispositivo de entrada padrão (normalmente o teclado).

A primeira linha da entrada contém um numero inteiro N (23N 3 500.000) representando o número de registros de 
raios no relatório. Cada uma das N linhas seguintes contém 2 números inteiros X. Y (OSXYS 500), representando 
o registro de um raio que caiu no quadrante cujas coordenadas são (XY).

Saida

Seu programa deve imprimir 1 se um raio caiu alguma vez em um mesmo lugar ou O caso isso não ocorreu;

*/
#include<stdio.h>

int main(){
	
	int n,k,j,r=0;
	
	scanf("%d",&n);
	
	int x[n],y[n];
	
	
	for(k=0;k<n;k++){
		scanf("%d%d",&x[k],&y[k]);
		printf("\n");
	}
	for(k=0;k<n;k++){
		for(j=0;j<n;j++){
			if( (x[k]==x[j] && k!=j) && (y[k]==y[j] && k!=j) ){
				r=1;
			}
		}
	}
	printf("\n%d",r);
	
}
