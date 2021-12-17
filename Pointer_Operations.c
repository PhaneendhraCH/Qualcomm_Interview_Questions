
#include <stdio.h>

int main() {
    
   int arr[] = {20, 30, 40};
   int *p = arr;
   int q;
   
   //value of p (20) incremented by 1
   //and returned
   q = ++*p;
   printf("arr[0] = %d, arr[1] = %d, *p = %d, q = %d \n",
   arr[0], arr[1], *p, q);
   
   //value of p (20) is returned
   //pointer incremented by 1
   q = *p++;
   printf("arr[0] = %d, arr[1] = %d, *p = %d, q = %d \n",
   arr[0], arr[1], *p, q);
   
   //pointer incremented by 1
   //value returned
   q = *++p;
   printf("arr[0] = %d, arr[1] = %d, *p = %d, q = %d \n",
   arr[0], arr[1], *p, q);
   
   return 0;
   
}