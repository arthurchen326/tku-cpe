#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int input, output = 0, count = 0;
	int min = 100, max = 40, passed = 0, failed = 0, sum = 0;
	srand(time(NULL));

	printf("Enter the number of scroes: ");
	scanf("%d",&input);
	printf("\n");
	for(int i=0;i<input;i++){
		output = rand() % (100-40+1) + 40; // (max - min +1) + min
		printf("%3d ", output);
		sum += output;
		count++;
		if(count == 10){
			printf("\n");
			count = 0;
		}
		if(output < min)
			min = output;
		else if(output > max)
			max = output;
		if(output < 60)
			failed++;
		else if(output >= 60)
			passed++;
	}
	printf("\n\n");
	printf("Max = %d\n", max);
	printf("Min = %d\n", min);
	printf("Average = %.1f\n", (float)sum / input);
	printf("Passed: %d\n", passed);
	printf("Failed: %d\n", failed);
}
