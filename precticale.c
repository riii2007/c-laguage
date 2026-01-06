#include<stdio.h>

int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    
        switch (ch)
        {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("Vowel");
            break;

        
        default:
            printf("Consonant");
            break;
        }
        printf("\n");
        printf("\n");
        printf("\n");

         int n, i, arr[100], max;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    max = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    printf("Largest element: %d", max);

    return 0;
}
