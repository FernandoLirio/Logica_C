#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char player1[256];
	char player2[256];
	
	printf("Player 1, Sua vez de jogar...!\n");
	scanf("%s",&player1);
	
	printf("\nPlayer 2, Sua vez de jogar...\n");
	scanf("%s",&player2);
	
	printf("\nAguarde estamos calculando seu resultado!!\n");
	
	if(strcmp(player1,"papel") == 0){
		
			if(strcmp(player2,"papel") == 0){
				printf("\nEMPATE!!\n");
			}else if(strcmp(player2,"tesoura") == 0){
				printf("\nPLAYER 2 GANHOU, TESOURA CORTA PAPEL\n");
			}else if(strcmp(player2,"pedra") == 0){
				printf("\nPLAYER 2 PERDEU, PAPEL GANHA DA PEDRA\n");
			}else{
				printf("\nO palyer 2 jougou uma informação invalida!!\n");
			}
		
	}else if(strcmp(player1,"tesoura") == 0){
		
		if(strcmp(player2,"papel") == 0){
				printf("\nO PLAYER 2 GANHOU, TESOURA CORTA PAPEL!!\n");
			}else if(strcmp(player2,"tesoura") == 0){
				printf("\nEMPATE!!\n");
			}else if(strcmp(player2,"pedra") == 0){
				printf("\nPLAYER 2 PERDEU, PEDRA GANHA DA TESOURA\n");
			}else{
				printf("\nO palyer 2 jougou uma informação invalida!!\n");
			}
		
	}else if(strcmp(player1,"pedra") == 0){
		
			if(strcmp(player2,"papel") == 0){
				printf("\nO PLAYER 2 GANHOU, PAPEL EMBRULHA A PEDRA !!\n");
			}else if(strcmp(player2,"tesoura") == 0){
				printf("\nPLAYER 2 PERDEU, PEDRA GANHA DA TESOURA\n");
			}else if(strcmp(player2,"pedra") == 0){
				printf("\nEMPATE!!\n");
			}else{
				printf("\nO palyer 2 jougou uma informação invalida!!\n");
			}
		
	}else{
		printf("\nEssa informação não e valida!!\n");
	}
	
	system("pause");
	return 0;
}
