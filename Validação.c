#include <stdio.h>
#include <stdlib.h>


int main(void){
	
	char nome[256];
	int idade;
	
	
	printf("Ola me chamo MAXI sua IA!!, qual e seu nome?\n");
	scanf("%s", nome);
	
	printf("\nQual sua idade?\n");
	scanf("%d", idade);
	
	printf("Primeira letra do seu nome e: %c",nome[0]);
	
	if(idade >= 18){
		printf("\nVoce e aulto!!\n");
	}else if(idade >=12){
		printf("\nVoce e adolecente!!\n");
	}else{
		printf("\nVoce e criança!!");
	}
	
	
	
	
	return 0;
}
