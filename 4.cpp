#include<stdio.h>
int main()
{
	int rw,c,n=1,len;
	printf("enter no of rows: ");
	scanf("%d",&len);
	for(rw=1;rw<=len;rw++){
	
	  printf("\n");
	  for(c=1;c<=rw;c++)
	  {
	    printf(" %2d ",n);
	    n++;
	  }
	}
}
