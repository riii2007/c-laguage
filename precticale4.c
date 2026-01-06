#include <stdio.h>

int main()
{
    int n, i, arr[100];
    int *p;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    p = arr;

    printf("Squares:\n");
    for (i = 0; i < n; i++)
        printf("%d ", (*(p + i)) * (*(p + i)));

    return 0;

    printf("\n");
    printf("\n");
    printf("\n");

     int k, j;

    for (k = 1; k <= 5; k++)
    {
        for (j = 1; j <= k; j++)
        {
            printf("%d ", k * k);
        }
        printf("\n");
    }

}
