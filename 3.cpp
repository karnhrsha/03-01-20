#include<stdio.h>
#include<math.h>
int main()
{
	int num1,num2,a,b,s=0;
	printf("enter two numbers");
	scanf("%d %d",&num1,&num2);
	b=num2;
	a=num1;
	while(b>0)
	{
		if(b%2!=0)
		{
			s=s+a;
		}
	 a=a*2;
	 b=b/2;
	}
	printf("%d * %d = %d",num1,num2,s);
	
}
