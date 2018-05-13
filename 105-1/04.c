#include <stdio.h>

void swap(int *a, int *b){
	int temp = 0;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int a, b;
	printf("Enter two integers: ");
	scanf("%d %d",&a,&b);
	printf("Before changing => a = %d, b = %d\n",a,b);
	swap(&a, &b);
	printf("After changing => a = %d, b = %d",a,b);
}
