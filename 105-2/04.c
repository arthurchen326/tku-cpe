#include <stdio.h>
#include <math.h>

int Binary2Decimal(int x,int n){
	if(x == 0)
		return 0;
	return (x % 10 * pow(2, n)) + Binary2Decimal(x / 10, n + 1);
}

int main(){
	int input;
	printf("input a binary:\n");
	scanf("%d",&input);
	printf("%d",Binary2Decimal(input,0));
}
