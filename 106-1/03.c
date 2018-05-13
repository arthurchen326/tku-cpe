#include <stdio.h>

int fib(int n){
	if(n == 1)
		return 1;
	else if(n == 0)
		return 0;
	return fib(n-1)+fib(n-2);
}

int main(){
	int input;
	printf("Enter M: ");
	scanf("%d",&input);
	for(int i=0;i<input;i++)
		printf("%d, ",fib(i));	
}
