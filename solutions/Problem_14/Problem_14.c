#include <stdio.h>

int main(void) {
	int i = 0;
	int n = 0;
	int start = i;
	int longest = 0;
	long long test = i;
for (; i<=1000000; i++){
	test = i;
	while (test>2){
		if (test%2==0) test/=2;
		else test=((test*3)+1)/2;
		n++;
	}
	if (n>longest){
		longest = n;
		start = i;
		printf("%i produces a Collatz sequence of length %i.\n", start, longest);
	}
	n = 0;
}
	return 0;
}