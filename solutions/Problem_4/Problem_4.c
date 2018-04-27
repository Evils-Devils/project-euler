#include <stdio.h>

int main(void) {
int result;
int p;
int temp;
int revP;
int i;
int j;
int k;
int l;
	for (i=999; i>99; i--){
		for(j=999; j>99; j--){
			p = i*j;
			temp = p;
			revP = 0;
			while (temp!=0) {
				int remainder = temp%10;
				revP=revP*10+remainder;
				temp/=10;
			}
			if (revP==p){
				int temp2 = result;
				result = result>p ? result : p;
				if(temp2!=result){
					k=i;
					l=j;
				}
			}
		}
	}
	printf("%d is the the palindromic product of %d and %d\n", result, k, l);
	return 0;
}