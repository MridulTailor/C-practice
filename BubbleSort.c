#include<stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  int arr[n];
  int i;
  for(i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }

  int counter=1;
  while(counter<n){
    for(i=0; i<n-counter; i++){
      if(arr[i]>arr[i+1]){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
      }
    }
    counter++;
  }
  for(i=0; i<n; i++){
    printf("%d ", arr[i]);
  }

}
