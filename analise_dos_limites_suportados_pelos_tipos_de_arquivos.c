#include <stdio.h>
#include <limits.h>
#include <locale.h>
int main(){
	setlocale(0,"");

	// Analisando os limites de cada tipo com a biblioteca limits.h
	printf("\t\t--- Análise dos limites suportados pelos tipos de arquivos ---\n");
	printf("\t\t\tValor mínimo\t\tValor máximo\n");
	printf("\nchar\t\t\t%d\t\t\t%d", CHAR_MIN, CHAR_MAX);
	printf("\nint\t\t\t%d\t\t\%d", INT_MIN, INT_MAX);
	printf("\nshort int\t\t%d\t\t\t%d", SHRT_MIN, SHRT_MAX);
	printf("\nunsigned int\t\t0\t\t\t%u", UINT_MAX);
	printf("\nlong int\t\t%d\t\t%d", LONG_MIN, LONG_MAX);
	printf("\nunsigned long int\t0\t\t\t%lu", ULONG_MAX);
	printf("\nlong long int\t\t%lld\t%lld", LLONG_MIN, LLONG_MAX);
	printf("\nunsigned long long int\t0\t\t\t%llu", ULLONG_MAX);
	// Inserção de qualquer coisa para o progama continar para o teste de overflow
	printf("\n\n\nDigite qualquer tecla para continuar");
	scanf("%d");
	system("cls");
	printf("\t\t--- Teste atribuindo valor maior do que seu tipo permite ---");
	// Demonstração de overflow
	int overf = INT_MAX;
	printf("\n\n\t\tValor máximo de int: %d", INT_MAX);
	printf("\n\n\t\tEfetuando o overflow em cima do valor de INT_MAX");
	overf = INT_MAX + 1;
	printf("\n\n\t\tValor apos o overflow: %d", overf);
	
	
	return 0;
}
