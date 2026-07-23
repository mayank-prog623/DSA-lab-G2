#include<stdio.h>
int main(){
    int a[100],n,i,pos,item;
    printf("enter number of elements: ");
    scanf("%d",&n);
    printf("enter array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    printf("enter position");
    scanf("%d",&pos);
    printf("enter the number to be inserted: ");
    scanf("%d",&item);
    for(i=n-1;i>=pos-1;i--){
        a[i+1]=a[i];

    }
    a[pos-1]=item;
    n++;
    printf("the new array is");
    for(int i=0;i<=n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}