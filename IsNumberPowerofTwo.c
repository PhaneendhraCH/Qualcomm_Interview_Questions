/*
The Number which is power of two has only 1 set bit
Eg : 8 (1000)
     16(1110) (Not power of 2)
     16(10000)
*/
#include <stdio.h>
int countsetbit(int number){
    static int count_one = 0;
    
    if(number<=0)
        return;
        
    if (number & 1){
        count_one++;
    }
    
    countsetbit(number>>1);
    return count_one;

}

int main()
{
    int number;
    scanf("%d",&number);
    if(countsetbit(number)==1)
        printf("Yes");
    else
        printf("No");
    //printf("Total No.of Setbits : %d",countsetbit(number));
    return 0;
}
