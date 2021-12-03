# Pointer to an Array

#include <stdio.h>

int main()
{
    int a[2][3] = {1,2,3,4,5,6};
    
    /*
    
    1 2 3
    4 5 6
    
    */
    
    int *b=a;
    printf("%d",(*(b+1)+3));

    return 0;
}
