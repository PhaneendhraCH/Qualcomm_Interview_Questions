/*

C program to check Most Significant Bit (MSB) of a number using bitwise operator
 
*/

#include <stdio.h>

#define BITS sizeof(int) * 8 // Total bits required to represent integer

int main()
{
    int num, msb;   
    
    /*
        Here int num is default signed int,
        
        if num is postive number then signed bit is 0
        if num is negative numberr then signed bit is -1
        
        5 = 0 0000000000000000000000000000101 
       -5 = 1 0000000000000000000000000000101 
       
       Here the MSB i.e. 31st bit is 0 for +ve and 1 for -ve
    */

    printf("Enter any number: ");
    scanf("%d", &num);

    /* Move first bit of 1 to highest order */
    
    msb = 1 << (BITS - 1);

    /* Perform bitwise AND with msb and num */
    
    if(num & msb)
        printf("MSB of %d is set (1).", num);
    else
        printf("MSB of %d is unset (0).", num);

    return 0;
}