/*

	Setbit of a number using Macro

*/

#include <stdio.h>

#define SET_BIT(bit_pos, number) number|(1<<bit_pos)


int main()
{
int d;
d = SET_BIT(1, 15);
printf("%d ",d);
}
