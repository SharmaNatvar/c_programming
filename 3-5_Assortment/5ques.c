#include <stdio.h>

//Write C Program to perform Column-wise sum of 2D array.

int main() {
    int r, c;

    printf("Enter the number of rows : ");
    scanf("%d ",&r);
    
    printf("Enter the number of columns : ");
    scanf("%d",&c);

    int a[r][c],i ,j,sum=0;

        	printf("Enter the elements : ");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {

            scanf("%d", &a[i][j]);
        }
    }

    printf("The colm sum : ");
    for (i = 0; i < c; i++) {
        for (j = 0; j < c; j++) {
            sum += a[i][j];
        }
        printf("col sum = %d ",sum);
    }

    return 0;
}

