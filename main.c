#include "remove.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char mensagem[101], hex[3], fim[] = "00";
	int i, b, verificar, x = 1;
	
	printf("Coloque o valor de B: ");
	scanf("%d", &b);
	printf("Coloque a mensagem: ");
	scanf("%100s", mensagem);
	
	for(i=0; i<strlen(mensagem); i+= 2){
		x = i / 2 + 1;
		verificar = func_val(x, b);
		if(verificar != 0){
			hex[0] = mensagem[i];
			hex[1] = mensagem [i + 1];
			hex[2] = '\0';
			if (strcmp(hex, fim) == 0){
				break;
			}
			int resultado = strtol(hex, NULL, 16);
			printf("%c", resultado);
		}
	}
	return 0;
}
