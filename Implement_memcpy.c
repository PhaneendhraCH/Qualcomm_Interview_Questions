/*
    Implement own memcpy function
        
        memcpy(des,src,size)
    
*/

#include <stdio.h>
#include <string.h>


void memCpy(void *des,void *src,int size){
    
    char *ndes = (char*)des;
    char *nsrc = (char*)src;
    
    printf("%s %s\n",des,src);
    
    for (int i=0; i<size; i++){
        ndes[i] = nsrc[i];
    }
        
    return;
}

int main()
{
    char a[12] = "phaneendhra";
    char b[12] = "ch";
    memCpy(b,a,6);
    
    printf("%s %s\n",b,a);
    
    //printf("%s\n",a);
    
    //memcpy(b+2,a,6);
    
    //printf("%s\n",b);
    return 0;
}
