#include <stdio.h>

int C2F(int temp){
	return ((float)((9 * temp) / 5) + 32) + 0.5;
}

int F2C(int temp){
	return ((float)((temp - 32) * 5) / 9) + 0.5;
}

int main(){
	int mode, temp = 0;
	printf("1. C to F\n");
	printf("2. F to C\n");
	printf("==>");
	scanf("%d",&mode);
	switch(mode){
		case 1:
			printf("C: ");
			scanf("%d",&temp);
			printf("%d",C2F(temp));
			break;
		case 2:
			printf("F: ");
			scanf("%d",&temp);
			printf("%d",F2C(temp));
			break;
		default:
			printf("Error");
	}
}
