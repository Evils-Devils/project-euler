#include <stdio.h>
#include <math.h>
#include <time.h>

int divisors(int n);
int triangle(int i);

int main(){
	clock_t start;
	clock_t end;
	double time;
	int i=0;
	int result=1;

	start = clock();

	for (; (divisors(result))<500; i++){
		result=triangle(i);
	}
	end = clock();
	time = end - start;
	time = time/1000;
	printf("%d is the smallest triangle number with 500 or more divisors.\nIt took %lf seconds to brute force find.\n", result, time);
return 0;
}

int divisors(int n){
	int d=1;
	for(int i=1; i<=floor(sqrt(n)); i++){
		if (n%i==0) d+=2;
	}
return d;
}

int triangle(int i){
	if (i<=1) return 1;
	return i+triangle(i-1);
}