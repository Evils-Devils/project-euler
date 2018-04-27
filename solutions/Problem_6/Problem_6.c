#include <stdio.h>

int main(void) {
	int sum=0;
	int sumSqr=0;
	for (int i=0; i<=100; i++){
		sum+=i;
		sumSqr+=(i*i);
	}
	printf("%d\n",(sum*sum)-sumSqr);
	return 0;
}