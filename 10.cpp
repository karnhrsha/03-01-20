#include<stdio.h>
int main()
{
	int n,i,a=0;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
	 a=(a*10)+3;
	 printf("%d",a);
	 if(i<n)
	 printf("+");
    }
}
