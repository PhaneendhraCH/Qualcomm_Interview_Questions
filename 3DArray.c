/*

    Representation of a 3D Array

    Input :
    1
    2
    3
    4
    5
    6
    7
    8
    9
    10
    11
    12
    
*/

#include <stdio.h>

int main()
{
    int arr[2][3][2];
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            for(int z=0; z<2; z++){
                scanf("%d",&arr[i][j][z]);
            }
        }
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            for(int z=0; z<2; z++){
                printf("%d ",arr[i][j][z]);
            }
            printf("\t");
        }
        printf("\n");
    }
   

    return 0;
}
