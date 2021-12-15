/*

    Program fro Little Endian

*/

#include <stdio.h>
int main()

{
unsigned int x = 0x12345678;

char *c;
c = &x; // c holds last two bits i.e. 78 

printf("%x\n",*c);

if (*c == 0x78)	
	printf("Little endian");
else
	printf("Big endian");


return 0;
}
