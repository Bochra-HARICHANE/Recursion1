#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int h,m,s;
	
	printf("Enter number 1 : ");
	scanf("%d", & h);
	printf("\nEnter number 2 : ");
	scanf("%d", & m);
	s= convert(h,m);
	printf("\nsconvert= %d ",s);
	return 0;
}

   int convert(int num1, int num2) {
   	return num1*3600 + num2*60 ;
}
