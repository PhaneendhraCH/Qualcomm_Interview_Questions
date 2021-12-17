/*

-If 5 bit is set then set 11 bit and 12 bit else clear the 11 bit and 12 bit.

*/

#include <stdio.h>

int setbit(int num,int pos1,int pos2){
    
    // (1<<bit) | num
    int c;
    c = (1<<pos1)|num;
    c = (1<<pos2)|num;
    return c;
}

int clearbit(int num,int pos1,int pos2){
    
    // ~(1<<bit) & num
    int c;
    c = ~(1<<pos1)& num;
    c = ~(1<<pos2)& num;
    return c;
}

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    
    if (((1<<5)|num) == num )
    {
        printf("After Setting 11th and 12th bit : %d\n",setbit(num,11,12));
    }
    else{
        printf("After Clearing 11th and 12th bit : %d\n",clearbit(num,11,12));
    }
    return 0;
}
