#include<stdio.h>
#include<stdlib.h>

main()
{
  int n, loc;
  scanf("%d", &n);

  int arr[n];
  printf("enter array elements:\n");
  for(int i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }

  int key;
  printf("Enter the key to be found\n");
  scanf("%d", &key);
  loc = linear_search(arr, n, key);
  if(loc == -1)
     printf("\nThe key is not present\n");
  else printf("\nThe data %d is present at %d position of array", key, loc);
}
int linear_search(int arr[], int n, int key)
{
    int i;
    for(i=0; i<n; i++)
       if(arr[i]==key)
            return i;

    return -1;
}
