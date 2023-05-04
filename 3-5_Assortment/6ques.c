#include <stdio.h>

//Write C Program to perform Column-wise sum of 2D array.

int main() {
    int r, c;

    printf("Enter the number of row : ");
    scanf("%d", &r);

    printf("Enter the number of col : ");
    scanf("%d",&c);

    int a[r][c],i,j, sum;

    
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
        	printf("Enter the elements : ");
            scanf("%d", &a[i][j]);
        }
    }

	
    printf("The col sum is:\n");
    for (i = 0; i < r; i++) {
        sum = 0;
        for (j = 0; j < c; j++) {
            sum += a[i][j];
        }
        printf("col %d sum = %d\n", j + 1, sum);
    }

    return 0;
}

