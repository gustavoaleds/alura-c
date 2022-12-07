#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
int main() {
	setlocale(LC_ALL, "");
    // imprime cabecalho do nosso jogo
    printf("\n\n******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");
    
    int segundos = time(0);
    srand(segundos);
    
    int numerogrande = rand();
    
    int numerosecreto = numerogrande % 100;
    int chute;
	int tentativas = 1;
	double pontos = 1000;
	
	int acertou = 0;
	
	int nivel;
	

	
	printf("Qual o nível de dificuldade desejada?");
	printf("[1] - Fácil  | [2] - Médio  | [3] - Difícil\n\n""");
	printf("Digite o valor:");
	scanf("%d", &nivel);
	
	int numerodetentativas;
	
	switch(nivel){
		case 1:
		numerodetentativas = 20;
		break;
	
		case 2:
		numerodetentativas = 15;
		break;
	
		default:
		numerodetentativas = 10;
		break;
			
	}
	int i = 1;
	for(i=1; i <= numerodetentativas; i++){
 	  	printf("\n\nTentativa %d.",tentativas);
 	  	printf("\nQual é o seu chute? ");
 	  	
	    scanf("\n%d", &chute);
	    printf("Seu chute foi %d.",chute);
	    
  		acertou = (chute == numerosecreto);		
		int maior = (chute>numerosecreto);	
		
   		if(acertou){
		break;
		
}
    	if(chute<0){
		printf("\nVocê não pode chutar um número negativo!");
		continue;
		}
			else if(maior){
		printf("\nVocê chutou um número alto demais!");
}
			else{
		printf("\nVocê chutou um número baixo demais!");
}
		tentativas++;
		
		double pontosperdidos = (double)(chute - numerosecreto) / (double)2;
		pontos = pontos - abs(pontosperdidos);     //Abs torna todos os números positivos, evitando bugs  na subtração de pontos;

}
if(acertou) {
		printf("\nFim de jogo!");
		printf("\nVocê precisou de %d tentativas para acertar.\n", tentativas);
		printf("Total de pontos: %.1f", pontos); //O .1 no % é referente a quantidade de casas decimais que serão apresentadas no resultado;
		}
		else{
			printf("\n\nVocê perdeu! Mas não desanima! Tenta de novo!");
		}
	return 0;	
	}

		
