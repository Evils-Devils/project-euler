#include <stdio.h>
#include <math.h>


int isPrime(long long n);

int main(void) {
	long long n = 9223372036854775807;
	for (long long i=3; i<n; i+=2){
		if (isPrime(i)&&n%i==0){
			n/=i;
			printf("%lli is a prime factor and divided it down to %lli\n", i, n);
		}
	}
	printf("%lli is a prime factor?", n);
return 0;
}


int isPrime(long long nr) {
    for (long long i = sqrt(nr); i >= 2; i--) {
        if (nr % i == 0) return 0;
    }
    return 1;
}