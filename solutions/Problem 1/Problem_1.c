#include <stdio.h>

int main(void) {
	int sum;
	for (int i=0; i<1000; i++){
		if (i % 3 == 0){
			sum +=i;
			printf("%i\n", i);
		}
		else if (i % 5 == 0){
			sum+=i;
			printf("%i\n", i);
		}
	}
	printf("the sum of all multiples of 3 or 5 up to 1000 is: %i\n", sum);
	return 0;
}