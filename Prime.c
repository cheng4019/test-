#include<stdio.h>
void main()
{
	int a,i;
	scanf("%d",&a);
	for(i=2;i<a;i++)
	{
		if(a%i==0)
			break;
	}
	if(i>=a)
		printf("This is a prime\n");
	else
		printf("This is not a prime\n");
	
}