#include <stdio.h>

void modify(int *a)
{
*a=10;
a=NULL;
}

int main()

{
int x=5;

int *p=&x; 

printf("%p %u\n",p,x);

modify(p);

p = NULL; 
/*
We need to explicitly specify p as NULL,if we want it to point as NULL
As the Pointer in modify is valid at the function scope and it'll store at its particular stack
*/
printf("%p %u\n",p,x);

return 0;

}