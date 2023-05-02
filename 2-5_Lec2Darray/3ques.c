#include <stdio.h>

//WAP to find average of 2D array.


int main() {
    int r, c;

    printf("Enter the number of rows : ");
    scanf("%d", &r);

    printf("Enter the number of columns : ");
    scanf("%d",&c);


    int a[r][c],i,j,sum,count,averg;

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
    		printf("Enter the elements : ");
            scanf("%d", &a[i][j]);
        }
    }

    sum = 0;
    count = r * c;

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            sum = sum + a[i][j];
        }
    }

    averg = sum / count;

    printf("The average of %d ", averg);

    return 0;
}

