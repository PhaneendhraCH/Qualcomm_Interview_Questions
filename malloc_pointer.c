/*

 Qualcomm Interview Question on 25 Jan 2022

 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    /*

     Here we are allocating 128 bytes to pointer p1
     128/4 = 32
     p1 can store 32 elements in the array

     */

	int *p1 = malloc(128);
	memset(p1,0,128);


	// p1 is at base address
    // after incrementing to 1 , p2 will point to second position i.e. p1[1]
	 int *p2 = p1+1;
	*p2 = 0xFFFFFFFF1234;  // assigning Hexadecimal values to p2 and it also modifies for p1 also
	
	/*


     '0xFFFFFFFF1234' in decimal ‘281474976649780’
     as p2 is int it overrides the range value so the resultant value will be '-60876'

     */
	
	printf("%d %d %d",p1[0],p1[1],p1[2]);
    // 0 -60876 0
	
	return 0;

}
