#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 1000 // maximum size of Row & Column in a 2-D array
int main() {

    int A[MAX][MAX],i,j,suma=0,sumb=0,N;
    
    /* get the number of elements */
    scanf("%d",&N);
    
    /* get the elements of the 2-D array */
    for(i=0;i<N;i++)
        {
        for(j=0;j<N;j++)
            {
            scanf("%d",&A[i][j]);
            
            /* if it is a left-diagonal element, add it to suma */
            if(i==j)
                suma+=A[i][j];
            
            /* if it is a right-diagonal element, add it to sumb */
            if(j==(N-i-1))
                sumb+=A[i][j];
        }
    }
    
    /* print the absolute difference of left diagonal sum & right diagonal sum */
    printf("%d",abs(suma-sumb));
    
    return 0;
}
