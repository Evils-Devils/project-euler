#include <stdio.h>

int main(void) {
	int array[400] = {0};
	array[0] = 1;
	int temp = 0;
	int i = 0;
	int sum = 0;
	for (; i<1000; i++){
		for (int j = 0; j<400; j++){
			int prev = temp;
			temp = array[j]>=5 ? 1 : 0;
			array[j] = array[j]%5*2+prev;
		}
	}
	for (i=0; i<400; i++){
		sum+=array[i];
	}
	printf("%i\n", sum);
	return 0;
}