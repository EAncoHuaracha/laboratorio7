#include <stdio.h>


float sum_elements(float a[], unsigned length) {

	int i;
	float result = 0;
	for (i = 0; i <= length-1; i++)
		result += a[i];
	return result;
}

int main(){
	float a[] = {1,2,3};
	float sum = sum_elements(a,3);
	printf("%f\n", sum);
}
