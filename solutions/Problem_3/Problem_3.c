#include <stdio.h>
#include <math.h>
#include <inttypes.h>
#define __STDC_FORMAT_MACROS


int isPrime(uint64_t n);

int main(void) {
	uint64_t n = 600851475143;
	uint64_t m = 0;
	uint64_t stop = sqrt(n) +1;
	for (uint64_t i = 3; i<stop; i+=2){
		if (isPrime(i)){
			if (n%i==0){
			//m = n/i;
			printf ("%" PRIu64 "\n", i);
			//printf ("%" PRIu64 "\n", m);
			}
		}
	}
	return 0;
}


int isPrime(uint64_t nr) {
    for (uint64_t i = sqrt(nr); i >= 2; i--) {
        if (nr % i == 0) return 0;
    }
    return 1;
}
