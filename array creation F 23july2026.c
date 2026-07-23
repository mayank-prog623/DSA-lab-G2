#include <stdio.h>
int main()
{
    int a[100],n;

    printf("enter the number of elements in the array");
    scanf("%d",&n);
    printf("enter the elements in array");

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    
    }
    printf("the elements in the array are");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}