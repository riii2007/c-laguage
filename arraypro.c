#include <stdio.h>

int main()
{

    int b;
   
    printf("enter the array size:", a);
     scanf("%d", &b);

    int arr[b];
   printf("enter the array elements:\n");
   for(int n=0; n<b; n++){
      scanf("a[%d]=",n);
      scanf("%d", &arr[n]);
   }
   printf("\nNegative elements from an Array: ");
   for (int g=0; g<b; g++)
   {
     if (arr[g] < 0)
   {
       printf("%d ",arr[g]);
     }
    }
    printf("\n");
    printf("\n");
    printf("\n");

    int row,col;
    printf("enter the number of rows:");
      scanf("%d", &row);

   printf("enter the number of columns:");
   scanf("%d", &col);

   int l[row][col];
   printf("enter the array elements:\n");

   for(int k=0; k<row; k++){

    for(int m=0; m<col; m++){

        printf("l[%d][%d]=", k, m);
         scanf("%d", &l[k][m]);
     }
    }
    int max=l[0][0];
    for(int k=0; k< row; k++){
   
   for(int m=0; m<col; m++){

   if(l[k][m]>max){
              max=l[k][m];
          }
       }
    }
    printf("largest element in the array is:%d", max);

    printf("\n");
    printf("\n");
    printf("\n");

    int c[10][10], t[10][10];
   int n;

   printf("Enter the array's row & column size: ");
   scanf("%d", &n);

    printf("\nEnter array's elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("c[%d][%d] = ", i, j);
            scanf("%d", &c[i][j]);
     }
   }

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            t[j][i] = a[i][j];
        }
   }

   printf("\nThe transpose matrix of an array:\n");
    for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
       printf("%d ", t[i][j]);
       }
       printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");

    int a[10][10];
    int r, c, row, col;
    int rowSum = 0, colSum = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("\nEnter array elements:\n");
    for (int p = 0; p < r; p++) {
        for (int m = 0; m < c; m++) {
            scanf("%d", &a[p][m]);
        }
    }

    printf("\nEnter row number to find sum: ");
    scanf("%d", &row);

    printf("Elements of row %d: ", row);
    for (int m = 0; m < c; m++) {
        printf("%d ", a[row][m]);
        rowSum += a[row][m];
    }

    printf("\nSum of row %d = %d\n", row, rowSum);

    printf("\nEnter column number to find sum: ");
    scanf("%d", &col);

    printf("Elements of column %d: ", col);
    for (int p = 0; p < r; p++) {
        printf("%d ", a[p][col]);
        colSum += a[p][col];
    }

    printf("\nSum of column %d = %d\n", col, colSum);



}

    


