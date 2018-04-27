#include <stdio.h>

int main(void) {
	int prev=1;
	int fib=2;
	int sum;
	while (fib<4000000){
		int temp;
		if (fib%2==0){
			printf("%i ", fib);
			sum+=fib;
		}
		temp = fib+prev;
		prev = fib;
		fib = temp;
	}
	printf("%i\n", sum);
	return 0;
}