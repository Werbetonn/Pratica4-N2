#include <stdio.h>
#include <locale.h>

int main() {
	
	int num;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	char b = isPositivo (num);
	
	printf("O número é positivo? %c", b);
	
	return 0;
}
