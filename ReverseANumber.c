#include <stdio.h>

int main()
{
    int rev=0,num=1234,sum;
    
    while (num>0){
        
        sum = num%10;
        rev = rev*10 +sum;
        num = num/10;
    }
    printf("%d",rev);

    return 0;
}
