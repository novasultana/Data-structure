#include <stdio.h>
 
int main()
{
   int arr[100], k, i, n, value;
   printf("Enter size\n");
   scanf("%d", &n);
 
   printf("Enter %d elements\n", n);
 
   for (i = 0; i < n; i++){
      scanf("%d", &arr[i]);
   }
 
   printf("Enter location \n");
   scanf("%d", &k);

   for (i = k-1; i<n- 1; i++){
      arr[i]=arr[i+1];
   }

   printf("Output array is\n");
 
   for (i = 0; i <n-1; i++){
      printf("%d\n", arr[i]);
   }
 
   return 0;
}
