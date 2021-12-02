/*

	Find the second largest array element in an array
	
	Author : Phaneendhra

*/

#include <stdio.h>

int main()
{
    int a[10];
    
    for (int i=0;i <10;i++)
        scanf("%d",&a[i]);
    
    int max,max_two;
    
    max = max_two = a[0];
    
    for (int i=1; i<10; i++){
        
        if (a[i]>max){
            
            max_two = max;
            max = a[i];
        }
        else if (a[i]>max_two){
            max_two = a[i];
        }
    }

    printf("Second Largest : %d Largest : %d\n",max_two,max);
    return 0;
}
