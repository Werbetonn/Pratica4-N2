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
	
	printf("Digite um n�mero");
	scanf("%d", &num);
	
	char b = isNegative(num);
	printf("O n�mero � negativo? %s", b);
	
	return 0;
	
}
