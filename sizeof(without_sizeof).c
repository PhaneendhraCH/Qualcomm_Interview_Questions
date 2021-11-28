/*

Find size of a variable without sizeof operator

*/


#include <stdio.h>

int main()
{
    int a;
    
    /*
    
    (char *)(&a+1) - (char *)(&a)) = 404 - 400 = 4
    
    Here (char *) tells exactly how many bytes does 'a' occupied
    
    */
    
    printf("%d %d %d",&a+1,&a,((char*)(&a+1) - (char*)(&a)));

    return 0;
}
