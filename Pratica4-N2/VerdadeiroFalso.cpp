#include <stdio.h>
#include <locale.h>

	char isNegative(int n) {
		if(n>=0) {
			return "falso";
		}
	return "Verdadeiro";
}

int main () {
	int num;
	
	printf("Digite um número");
	scanf("%d", &num);
	
	char b = isNegative(num);
	printf("O número é negativo? %s", b);
	
	return 0;
	
}
