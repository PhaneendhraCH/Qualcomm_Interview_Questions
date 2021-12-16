/*

Write a C Program 
	where,
	1.array has both even and odd numbers in such a way,where
		1.1 odd_numbers are in ascending order followed by even numbers are in descending order
	2.Size of array = Max element in an array
	3.Total no.of odd elements = Total no.of even elements if (size is even) else accomodate odd numbers first

	if size = 6, then arr = [1,3,5,6,4,2]
	if size = 9, then arr = [1,3,5,7,9,8,6,4,2]

*/

#include <stdio.h>
#define size 6 
int main()
{
    int arr [size];
    int odd_count = 0;
    int num=1,flag=1;
    
    int n = size/2;
    
    if (size&1){
        n=n+1;
    }
    
    // 6/2 = 3, 7/2 = 3+1
    
    for(int i=0;i<size;i++){
        
        if (odd_count<n){
            arr[i] = num;
            num+=2;
            odd_count++;
        }
        
        else{
            
            if (flag){
                
                if (size&1){
                num = arr[i-1]-1;
                }
                else{
                num = arr[i-1]+1;
                }
            
            flag = 0;
    
            }
            
            arr[i] = num;
            num-=2;
        }

    }

    for(int j = 0;j<size;j++){
        printf("%d ",arr[j]);
    }
    return 0;
}
