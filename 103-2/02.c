#include <stdio.h>

void print_star(int x, int y){
	if(x == 0){
		printf("\n");
		y--;
		x=y;
	}
	if(y == 0)
		return;
	printf("*");
	print_star(x-1,y);
}

int main(){
	int x = 0;
	printf("n:");
	scanf("%d",&x);
	print_star(x,x);

	return 0;
}
