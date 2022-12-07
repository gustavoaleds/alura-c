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
	
	while(1){
 	  	printf("\n\nTentativa %d.",tentativas);
 	  	printf("\nQual é o seu chute? ");
 	  	
	    scanf("\n%d", &chute);
	    printf("Seu chute foi %d.",chute);
	    
  		int acertou = (chute == numerosecreto);		
		int maior = (chute>numerosecreto);	
		
   		if(acertou){
		printf("\nParabéns, você acertou!\n");
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
		printf("\nFim de jogo!");
		printf("\nVocê precisou de %d tentativas para acertar.\n", tentativas);
		printf("Total de pontos: %.1f", pontos); //O .1 no % é referente a quantidade de casas decimais que serão apresentadas no resultado;
		return 0;
}
		
