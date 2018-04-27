#include <stdio.h>


int divisors(int n);
int triangle(int i);

int main(){
	int i=0;
	int result=1;
	for (; (divisors(result))<500; i++){
		result=triangle(i);
	}
	printf("%d\n", result);
return 0;
}

int divisors(int n){
	int d=1;
	for(int i=1; i<=(n/2); i++){
		if (n%i==0) d++;
	}
return d;
}

int triangle(int i){
	if (i<=1) return 1;
	return i+triangle(i-1);
}