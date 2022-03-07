#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,c;
	printf("\Input the first number \n");
	scanf("%d",&a);

	printf("\nInput the second number \n");
	scanf("%d",&b);

	printf("\nInput the third number \n");
	scanf("%d",&c);

	/* to find the largest */
	if(a>b && b>c){
        printf("\n %d is the Largest",a);
	}
	else if(b>a && b>c){
        printf("\n %d is the Largest",b);
	}
	else{
        printf("\n %d is the Largest",c);
	}

	/* to find the smallest */
	if(a<b && b<c){
        printf("\n %d is the smallest",a);
	}
	else if(b<a && b<c){
        printf("\n %d is the smallest",b);
	}
	else{
        printf("\n %d is the smallest",c);
	}
  	return 0;
}
