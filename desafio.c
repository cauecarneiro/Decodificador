#include <stdio.h>
int main(){
	// Declarando as variáveis    
	float n1, n2, n3, ppd, ex; 
    int eu;
    // Pedindo incerção via teclado
	printf("\tNota N1: "); 
    scanf("%f", &n1);
    
	printf("\tNota N2: ");
    scanf("%f", &n2);
    
	printf("\tNota PPD: ");
    scanf("%f", &ppd);
    
	printf("\tVoce fez o Exame Unificado? 1/0: ");
    scanf("%d", &eu);
    // Se as notas não estiverem entre os valores permitidos, return 3 (codigo de erro)
    if (n1 < 0 || n1 > 4.5 || n2 < 0 || n2 > 4.5 || ppd < 0 || ppd > 1) {
        printf("Codigo de erro 3: notas invalidas.\n");
        return 3; // Código de erro 3
    }
    //Verificando a flag se fez ou não o exame unificado
	if(eu == 1){
        printf("\tNota Exame Unificado: ");
        scanf("%f", &ex);
        system("cls");
	}else{
        ex = 0;
        printf("\tVoce deixou de ganhar ponto extra do Exame Unificado");
    }
    // Calculando nota final
	float nf = n1+n2+ppd+ex;
    printf("\n\tSua nota final: %1.f", nf);
    // Se não acalnçou a media, perguntará se fez a n3
	if(nf<7){
        char fn3;
        printf("\n\n\tVoce nao alcançou a nota para passar de semestre!\n\n\tVocê fez a N3? S/N: ");
        scanf("%s", &fn3);
        // Se fez a n3, pedindo a incercão da nota
		if(fn3 == 'S'){
            printf("\n\tNota N3: ");
            scanf("%f", &n3);
            float notafinal = n1+n2+n3+ppd+ex;
            printf("\tNota final: %.1f", notafinal);
            printf("\n\tVoce esta aprovado!");
		}else{
            system("cls");
            printf("\n\tVoce reprovou!");
        }
    }else{
         system("cls");
        float notafinal = n1+n2+n3+ppd+ex;
        printf("\tNota final: %.1f", notafinal);
        printf("\n\tVoce esta aprovado!");
    }
}
