#include<stdio.h>

int main()
{
  int n;
  printf("Enter size of array\n");
  scanf("%d", &n);

  int arr[n];
  printf("Enter array elements\n");
  for(int i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }
  int key;
  printf("Enter the key to be found\n");
  scanf("%d", &key);

  int loc=binary_search(arr, n, key);
  if(loc==-1)
     printf("the key is not present");
  else
     printf("The key %d is present at position %d", key, loc+1);
}
int binary_search(int arr[], int n, int key)
{
  int s=0;
  int e=n;
  while(s<=e){
    int mid=(s+e)/2;

    if(arr[mid]==key)
        return (mid);
    else if(arr[mid]>key){
      e=(mid-1);
    }
    else{
      s=(mid+1);
    }
  }
  return -1;
}
