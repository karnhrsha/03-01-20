#include<stdio.h>
int main()
{
	int n,i,f,number,r=0,sum=0;
	printf("enter the number");
	scanf("%d",&number);
	n=number;
	while(number>0)
	{
	 r= number % 10;
	 f=1;
	  for(i=1;i<=r;i++)
	  {
	   f=f*i;
      }
	 sum+=f;
     number = number / 10;
    }
    if (sum == n)
        printf ("The given number is strong number");
    else
        printf ("The given number is not a strong number");
}
