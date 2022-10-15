#include <stdio.h>

int main()
{
   int arr[100];
   int k, i, n;
   printf("Enter size: ");
   scanf("%d", &n);

   printf("Input array elements: ", n);

   for (i = 0; i < n; i++){
      scanf("%d", &arr[i]);
   }

   printf("Input position to delete: ");
   scanf("%d", &k);

   for (i = k-1; i<n- 1; i++){
      arr[i]=arr[i+1];
   }

   printf("Array elements: ");

   for (i = 0; i <n-1; i++){
      printf("%d ", arr[i]);
   }

   return 0;
}
