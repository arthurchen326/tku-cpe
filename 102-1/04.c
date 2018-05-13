#include <stdio.h>

int Power(int base, int exponent){
	if(exponent == 1)
		return base;
	return base * Power(base, exponent-1);
}

int main(){
	int base;
	int exponent;
	printf("Enter a base and an exponet: ");
	scanf("%d",&base);
	scanf("%d",&exponent);
	printf("%d",Power(base,exponent));	
}
