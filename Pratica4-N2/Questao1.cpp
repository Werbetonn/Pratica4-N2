#include <stdio.h>
#include <locale.h>

int main() {
	
	int num;
	
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	
	char b = isPositivo (num);
	
	printf("O n�mero � positivo? %c", b);
	
	return 0;
}
