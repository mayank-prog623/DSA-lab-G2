#include <stdio.h>
int main()
{
  int n, arr[100];
  printf("Enter no. of elements in array: ");
  scanf("%d", &n);
  printf("ENter the elements in the array: ");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("Array elements are: ");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }

  printf("\n");

  int pos, item;
  printf("Enter position of an element to insert: ");
  scanf("%d", &pos);
  printf("Enter element to insert: ");
  scanf("%d", &item);

  for (int i = n; i >= pos; i--)
  {
    arr[i] = arr[i - 1];
  }
  arr[pos - 1] = item;
  n++;

  printf("After insertion elements are: ");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}