#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void separateNumbers(char* s) {
    // Complete this function
    long int d1=0,d2=0,d3,l=strlen(s),f;
    for(long int i=0;i<=l/2;i++)
    {
        d1=d1*10+(int)(s[i]-'0');
        d3=d1;
        d2=0;
        f=0;
        for(long int j = i+1;j<l;j++)
        {
            d2=d2*10+(int)(s[j]-'0');// second digit
            if(d2 == 0 || (d2-d1)>1)
            {
                f=0;
                break;
            }
            if(d2-d1 == 1)
            {
                f=1;
                d1=d2;
                d2=0;
            }
            else
                f=0;
        }
        if(f)
        {
            printf("YES %ld\n",d3);
            break;
        }
          
        d1=d3;
    }
    if(f == 0)
        printf("NO\n");
}

int main() {
    int q;
    scanf("%i", &q);
    for(int a0 = 0; a0 < q; a0++){
        char* s = (char *)malloc(512000 * sizeof(char));
        scanf("%s", s);
        separateNumbers(s);
    }
    return 0;
}
