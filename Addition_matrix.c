#include <stdio.h>
int main(){
    int arr1[100][100], arr2[100][100], sum[100][100];
    int r, c;
    int i, j;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    printf("Enter the elements of first matrix:\n");
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the elements of second matrix:\n");
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            scanf("%d", &arr2[i][j]);
        }
    }
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("\nAddition of two matrices is:\n");
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}