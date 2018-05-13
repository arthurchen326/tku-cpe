#include <stdio.h>

void Uppercase(int input){ // a is 97, A is 65
	printf("%c",input-32);	
}

int main(){
	char input;
	scanf("%c",&input);
	if((int)input >= 97 && (int)input <= 122)
		Uppercase((int)input);
	else
		printf("%c",input);
}
