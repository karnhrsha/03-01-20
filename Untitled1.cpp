#include <stdio.h>
#include <math.h>
 
int main()
{
    int number, sum = 0, r = 0, cube = 0, temp,n=0,temp1;
 
    printf ("enter a number");
    scanf("%d", &number);
    temp = number;
    temp1=number;
    while(number>0)
    {
    	number=number/10;
    	n++;	
	}
    while (temp != 0)
    {
        r= temp % 10;
        cube = pow(r, n);
        sum = sum + cube;
        temp = temp / 10;
    }
    if (sum == temp1)
        printf ("The given number is armstrong number");
    else
        printf ("The given number is not a armstrong number");
}
