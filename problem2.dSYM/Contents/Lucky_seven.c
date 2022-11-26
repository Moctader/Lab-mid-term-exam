#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T, i,length, j, flag=0;
    

    scanf("%d", &T);

    char string1[T][20];


    for(i=1; i<=T;i++)
    {
       scanf("%s", string1[i]);  
    }

    for(i=1; i<=T;i++)
    {
        length = strlen(string1[i]);
        
        
        for(j=0;j < length ;j++)
        {
            flag = 0;
            if(string1[i][j] != string1[i][length-j-1])  
            {
                flag = 1;
                break;
            }
        }
        
        if (flag) {
            printf("Case #1: Not Palindrome\n");
        }    
        else if(length>7) 
        {
           
            printf("Case #2: %c%d%c\n",string1[i][0], length-2, string1[i][length-1]);
        }
        else
        {
            printf("Case #3: %s\n",string1[i]);
        }
    }
    return 0;
}