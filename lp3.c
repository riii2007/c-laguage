#include<stdio.h>

int first,last,nu,sum;
int main()
{
    printf("Enter any number:");
    scanf("%d",&nu);

    last = nu % 10;

    while(nu >= 10)
    {
        nu = nu / 10;
    }

    first = nu;

    sum = first + last;

    printf("Sum of first and last digit is: %d\n",sum);

    
}