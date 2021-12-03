/*

    Static,global and Auto variables

*/

#include <stdio.h>

int a=10;

int sum(int num1, int num2)
{
static int a =0;
printf("(Inside sum) a : %d\n",a); 
a=num1+num2; 
return a;
}

int main()
{
    printf("a : %d\n",a);
    int a =20;
    
    printf("a : %d\n",sum(5,3));

    printf("a : %d\n",sum(6,9));
    
    printf("a : %d\n",a);
    {
        extern int a;
        printf("(Global a variable) a : %d\n",a);
    }
}