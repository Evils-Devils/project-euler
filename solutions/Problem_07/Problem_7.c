#include <stdio.h>

int isPrime(int number);

int main(){
int answr=0;
int n=10001;
int i=2;
int count=0;
for (; count<n; i++){
	if(isPrime(i)){
		count++;
		answr=i;
		}
	}
printf("%d is the %dth prime.\n", answr, count);
return 0;
}


int isPrime(int number) {
    int i;
    for (i=2; i*i<=number; i++) {
        if (number % i == 0) return 0;
    }
    return 1;
}