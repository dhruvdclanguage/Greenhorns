#include<stdio.h>

int main () {
	
	int a ;
	int b ;
	
	printf("enter a :");
	scanf("%i",&a);
	
	printf("enter b :");
	scanf ("%i",&b);
	
	a = a+b;
	b = a-b;
	a = a-b;
	
		
		printf("a:%d\n",a);
		printf("b:%d",b);

	return 0;
}
