#include <stdio.h>

void Move(int n, char peg1, char peg2, char peg3){ // 132 213 
	if(n == 0)
		return;
	Move(n-1, peg1, peg3, peg2);
	printf("%c -> %c\n",peg1,peg3);
	Move(n-1, peg2, peg1, peg3);
}

int main(){
	int input;
	printf("enter the number of disks: ");
	scanf("%d",&input);
	Move(input,'A','B','C');
}
