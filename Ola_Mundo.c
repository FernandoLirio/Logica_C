#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int horariocinema = 20;
	int horarioatual = 20;
	int horavalidada = horariocinema + 30;
	
	if(horarioatual > horavalidada){
		printf("Passou do tempo limite! Não pode entrar!");
	}else if(horarioatual < horariocinema - 30){
		printf("Nem abriu a porta do cinema");	
	}else{
		printf("O horario ta certo, Pode entrar!");
	}
	
	return 0;
}
