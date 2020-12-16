/*

35. Ca�adores de Mito

Jorge � um apresentador de televis�o que comanda a vers�o brasileira do grande sucesso Ca�adores de Mitos, 
onde se estuda tum mito para descobrir se � fato ou apenas um boato. No pr�ximo epis�dio, Jorge dever� apresentar 
o mito que diz que os raios n�o caem duas vezes no mesmo lugar�, referindo-se aos raios das tempestades de 
chuva. Para isso, foi at� a cidade de Eletrol�ndia, que � a cidade com maior ocorr�ncia de raios no mundo.
 O prefeito tem tanto orgulho desse titulo que mandou criar um sistema para registrar os raios.
  Jorge conseguiu um relat�rio com as ocorrencias de cada raio que caiu na cidade nos �ltimos anos.
O mapa de Eletrolandin � um ret�ngulo. Parso sistema de registro a cidade � subdividida em quadrados de 
um metro de lado, denominados quadrantes. Assim, se a cidade tem 300 metros de largura e 1000 de comprimento,
 ela ser� subdividida em 300,000 quadrantes. O sistema de registro armazena o quadrante em que o raio calu.
  Cada quadrante � identificado pelas suas coordenadas X . Y conforme ilustra a figura abaixo, que exemplifica
   um mapa de uma cidade com oito metros de comprimento por cinco metros de largura (quarenta quadrantes).

Como os quadrantes s�o relativamente pequenos. Jorge decidiu que se dois raios ca�ram no mesmo quadrante.
pode-se considerar que ca�ram no mesmo lugar.

Tarefa
Sua miss�o � escrever um programa que receba as coordenadas dos raios que ca�ram em Eletrol�ndia nos �ltimos anos
 e determine se o mito estudado � realmente spenns um mito ou pode ser considerado verdade.
Entrada

A entrada cont�m um �nico conjunto de testes que deve ser lido do dispositivo de entrada padr�o (normalmente o teclado).

A primeira linha da entrada cont�m um numero inteiro N (23N 3 500.000) representando o n�mero de registros de 
raios no relat�rio. Cada uma das N linhas seguintes cont�m 2 n�meros inteiros X. Y (OSXYS 500), representando 
o registro de um raio que caiu no quadrante cujas coordenadas s�o (XY).

Saida

Seu programa deve imprimir 1 se um raio caiu alguma vez em um mesmo lugar ou O caso isso n�o ocorreu;

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
