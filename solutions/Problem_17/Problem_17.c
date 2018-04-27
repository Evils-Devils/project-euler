#include <stdio.h>

int main(void) {
	int i = 1;
	int count = 0;
	for (; i<=1000 ; i++){
		int n = i;
		if((n>100)&&(n%100!=0)&&(n%1000!=0)&&(n%1000000!=0)&&(n%1000000000!=0)) count +=3;
		while (n>0){
			if (n%1000000000==0){count+=7; n/=1000000000;}
			if (n%1000000==0){count+=7; n/=1000000;}
			if (n%1000==0){count+=8; n/=1000;}
			if (n%100==0){count+=7; n/=100;}
			if ((n-90)%100==0){count +=6; n-=90;}
			if ((n-80)%100==0){count +=6; n-=80;}
			if ((n-70)%100==0){count +=7; n-=70;}
			if ((n-60)%100==0){count +=5; n-=60;}
			if ((n-50)%100==0){count +=5; n-=50;}
			if ((n-40)%100==0){count +=5; n-=40;}
			if ((n-30)%100==0){count +=6; n-=30;}
			if ((n-20)%100==0){count +=6; n-=20;}
			if ((n-19)%100==0){count +=8; n-=19;}
			if ((n-18)%100==0){count +=8; n-=18;}
			if ((n-17)%100==0){count +=9; n-=17;}
			if ((n-16)%100==0){count +=7; n-=16;}
			if ((n-15)%100==0){count +=7; n-=15;}
			if ((n-14)%100==0){count +=8; n-=14;}
			if ((n-13)%100==0){count +=8; n-=13;}
			if ((n-12)%100==0){count +=6; n-=12;}
			if ((n-11)%100==0){count +=6; n-=11;}
			if ((n-10)%100==0){count +=3; n-=10;}
			if ((n-9)%10==0){count +=4; n-=9;}
			if ((n-8)%10==0){count +=5; n-=8;}
			if ((n-7)%10==0){count +=5; n-=7;}
			if ((n-6)%10==0){count +=3; n-=6;}
			if ((n-5)%10==0){count +=4; n-=5;}
			if ((n-4)%10==0){count +=4; n-=4;}
			if ((n-3)%10==0){count +=5; n-=3;}
			if ((n-2)%10==0){count +=3; n-=2;}
			if ((n-1)%10==0){count +=3; n-=1;}
		}
	}
	printf("%i is the letter count of all numbers from 1 up to and including 1000.\n", count);
	return 0;
}