#include <stdio.h>
long fun(int n)
{
	long f;
	if(n<0) printf("input error");
	else if(n==0||n==1) f=1;
	else f=n*fun(n-1);
	return f;
}

void main()
{
	int i,n;
	float s=0.0;
	printf("input n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		 s+=1.0/fun(i);
	printf("s=%f",s);
}
