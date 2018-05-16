#include <stdio.h>

int main(){
	int input;
	printf("n: ");
	scanf("%d",&input);
	for(int i=0;i<=input;i++){
		for(int j=input;j>i;j--)
			printf(" ");
		for(int k=0;k<i;k++)
			printf("*");
		printf("\n");
	}
}
