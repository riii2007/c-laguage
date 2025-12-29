#include <stdio.h>
int main()
{
int n,count=0;
    printf("Enter any number of your choice:");
    scanf("%d",&n);

    if(n == 0)
    {
        count = 1;
    }
    else
    {
        while(n != 0)
        {
                n /= 10;
                ++count ;
        }
    }
    printf("Total number of digits are: %d\n",count);

    printf("\n");
    printf("\n");
}
