#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>

int main(){
  FILE *fp;
  fp=fopen("Problem_13_file.txt", "r"); //original numbers reduced to 19 most significant digits
  double sum = 0;
  if (fp == NULL) {
    printf("fopen error: %s\n", strerror(errno));
    return 1;
  }
  for (int i=0; i<100; i++){
	  double temp;
	  fscanf(fp,"%lf\n", &temp);
	  sum += temp;
  }
printf("%lf\n", sum);
fclose(fp);
return 0;
}