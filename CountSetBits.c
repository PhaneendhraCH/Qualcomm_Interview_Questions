/*
Count Set Bit of a number.(Count only 1s)
*/
#include <stdio.h>
int countsetbit(int number){
    static int count = 0;
    
    if(number<=0)
        return 0;
        
    if (number & 1){
        count++;
    }
    
    countsetbit(number>>1);
    return count;

}

int main()
{
    int number;
    scanf("%d",&number);
    printf("Total No.of Setbits : %d",countsetbit(number));
    return 0;
}
