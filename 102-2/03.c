#include <stdio.h>

int oddsum(int input){
	if(input == 1)
		return input;
	return (input * 2 - 1) + oddsum(input - 1);
}

int main(){
	int input;
	printf("Enter N:");
	scanf("%d",&input);
	printf("%d",oddsum(input));
}
