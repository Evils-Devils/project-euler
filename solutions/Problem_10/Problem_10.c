#include <stdio.h>
#include <math.h>

int isPrime(int nr);

int main(void) {
	long long sum = 0;
	for (int i=2; i<2000000; i++) if (isPrime(i)) sum+=i;
	printf("%lli is the sum of all primes up to 2 000 000.", sum);
return 0;
}

int isPrime(int nr) {
    for (int i = sqrt(nr); i>= 2; i--) {
        if (nr % i == 0) return 0;
    }
    return 1;
}