#include <stdio.h>

//1.WAP to get & print 2D array of N elements.

int main() {
	
	int n;
	printf("enter size of Array : ");
	scanf("%d",&n);
	
    int a[n][n],i,j;

    for (i = 0; i < n; i++) {
        for ( j= 0; j < n; j++) {
            printf("enter Element :- ");
            scanf("%d",&a[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

