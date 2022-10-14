#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int idade1, idade2;
	
	printf("Desconto para a segunda idade ser ímpar \n");
	
	printf("Digite a idade: ");
	scanf("%d", &idade1);
	
	printf("Digite a idade: ");
	scanf("%d", &idade2);
	
	if ((idade1 %2!=0) || (idade2 %2==1)){
	
			printf("DESCONTO");	
		}

	return 0;
}
