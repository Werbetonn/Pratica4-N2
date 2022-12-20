#include <stdio.h>
#include <locale.h>

int soma(int n1,int n2){
	return n1 + n2;
}

int main() {
	setlocale(LC_ALL, "Potuguese_Brazil");
	int num1, num2, r;
	
	printf("Digite um número: ");
	scanf("%d", &num1;)
		printf("Digite outro número: ");
	scanf("%d", &num2;)
	
	r = soma(num1, num2);
	
	printf("O resultado é %d", r);
	
	return 0;
}
