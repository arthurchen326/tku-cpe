#include <stdio.h>

int main(){
	int input;
	int count = 0, biggest = 0, smallest, sum = 0;
	while(scanf("%d",&input) && input != -999){
		if(count == 0)
			smallest = input;
		count++;
		sum+=input;
		if(input > biggest)
			biggest = input;
		else if(input < smallest)
			smallest = input;
	}
	printf("Numbers Entered: %d\n",count);
	printf("Largest number: %d\n",biggest);
	printf("Smallest number: %d\n",smallest);
	printf("Average: %.1f",(float)sum/count);
}
