#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int T,i,j;
    scanf("%d", &T);
    char string1[T][20];
    int N;
    int len;
 
    
    //input the values 
    for(i=1; i<=T; i++)
    {
        scanf("%d", &N);
    
        //printf("\nEnter the values of N\n");
        //for(i=1; i<=N; i++)
         scanf("%s", string1[i]);

    }
    for(i=1; i<=T; i++)
    {   int count=0;
        len = strlen(string1[i]);
        for(j=0; j<=len; j++)
        { 
            //printf("%c\n",string1[i][j]);
            if ((string1[i][j]=='0' && string1[i][j+1]=='1')||(string1[i][j]=='1' && string1[i][j+1]=='0'))
            {
               
                 count++;
            }
        }
        printf("%d\n", count);

    }
    
    return 0;
}