#include <stdio.h>

int main(void) {
	for (int a=1; a<1000; a++){
		for(int b=1; b<1000; b++){
			for(int c=1; c<1000; c++){
				if((a+b+c==1000)&&((a*a)+(b*b)==(c*c))){
					printf("%d, %d, %d, are the a, b, c, for a pythagorean triplet for which the sum is 1000 who's product is %d\n", a, b, c, (a*b*c));
					a=1001;
					b=1001;
					c=1001;
				}
			}
		}
	}
	return 0;
}