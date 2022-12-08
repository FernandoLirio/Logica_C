#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char nome[256];
	char sobrenome[256];
	int anoNascimento;
	
	int idade;
	
	printf("Qual e o sua nome?\n");
	scanf("%s",nome);
	
	printf("Qual e a sua idade %s?\n",nome);
	scanf("%d",&idade);
	
	printf("\nAgora eu entendi tu tens %d, e seu nome e %s", idade,&nome);
	
	
	
	
	
	return 0;
}
