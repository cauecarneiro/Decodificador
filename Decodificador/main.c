#include "remove.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char mensagem[101], hex[3], fim[] = "00"; // Variáveis para mensagem, conversão e fim.
	int j,i, b, quantidade, verificar, x = 1;

	// Solicita a quantidade de mensagens ao usuário, garantindo que seja válida.
	do{
		printf("\nQuantidade de mensagem: ");
		scanf("%d", &quantidade);
		if(quantidade <= 0){
			printf("Valor invalido. tente novamente\n");
		}
	}while(quantidade <= 0);
	
	// Processa cada mensagem.
	for(j = 1; j <= quantidade; j++){
		printf("\nColoque o valor de B: ");
		scanf("%d", &b);
		printf("Coloque a mensagem: ");
		scanf("%100s", mensagem);
		printf("\n\"");
		 // Processa cada par de caracteres da mensagem.
		for(i=0; i<strlen(mensagem); i+= 2){
			x = i / 2 + 1;
			verificar = func_val(x, b); // Chama função para verificação.
			if(verificar != 0){
				hex[0] = mensagem[i];
				hex[1] = mensagem [i + 1];
				hex[2] = '\0';
				if (strcmp(hex, fim) == 0){
					break; // Interrompe se encontrar "00".
				}
				int resultado = strtol(hex, NULL, 16);  // Converte de hexadecimal para decimal.
				printf("%c", resultado); // Imprime o caractere resultante.
			}
		}
		printf("\"\n"); // Finaliza a impressão da mensagem
	}
	return 0;
}
