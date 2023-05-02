#include <stdio.h>

//WAP to find length of 2D array.

int main() {
    int r, c ,i ,j ,lenth;

    printf("Enter the number of rows : ");
    scanf("%d", &r);

    printf("Enter the number of columns : ");
    scanf("%d",&c);


    int a[r][c];

    
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
        	printf("Enter the elements : ");
            scanf("%d", &a[i][j]);
        }
    }

    lenth = r * c;

    printf("The length of array is %d ", lenth);

    return 0;
}

