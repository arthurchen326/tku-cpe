#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float RightTriangleArea(int a, int b, float *c){
	*c = sqrt((a * a) + (b * b));
	return (a * b) / 2;
}

int main(){
	int a,b;
	float c;
	float area;
	printf("Enter the right-angled side length:\n");
	scanf("%d,%d", &a, &b);
	area = RightTriangleArea(a, b, &c);
	printf("Length of oblique edge = %f\n", c);
	printf("Area of right triangle = %f\n", area);
	return 0;
}
