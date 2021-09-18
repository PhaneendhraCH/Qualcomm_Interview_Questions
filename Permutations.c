/*
permutations : 7 8 9 (List)
               7,8,9,78,79,89,789 (Possible Combinations)
               
               Applying XOR(^) operations on all the possible combinations
*/

#include <stdio.h>
#define Max 3
#define Size 1000
int XorArr[Size],ind=0;

void xoropo(int arr[],int start,int end){
    
        int i,j;
        XorArr[ind] = arr[start];
        printf("%d^",arr[start]);
        ind++;
        
        for(i=start,j=end-1;j>=0;j--){
            if(i==j){
                break;
            }
            XorArr[ind] = arr[i]^arr[j];
            printf("(%d^%d)^",arr[i],arr[j]);
            ind++;
            //printf("\n");
        }
}

void partition(int arr[],int index){
       int i;
        for (i=0;i<index;i++){
                xoropo(arr,i,index); 
        }
}

int main()
{
    
    int a[3] = {7,8,9},result=0;
    
    printf("Expression : ");
    partition(a,Max);
    printf("(");
    for(int j=0;j<Max;j++)
        {
            result^=a[j]; 
            if(!(j==Max-1))
                printf("%d^",a[j]);
            else
                printf("%d",a[j]);
            //printf("Result(3) = %d\n",result);
        }
        printf(")");
    
    for(int i=0;i<ind;i++){
        
        result^= XorArr[i];
        //printf("\n%d ",XorArr[i]);
    }
    
    printf("\nResult = %d",result);

    return 0;
}