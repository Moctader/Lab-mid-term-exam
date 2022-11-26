#include <stdio.h>
#include <string.h>

int main(){
    int T, i, x,k,length, j, flag;
    
    printf("Enter a number:");
    scanf("%d", &T);

    char string1[T][1000];
 

    printf("Enter a string:");

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
            printf("%s is not a palindrome\n", string1[i]);
        }    
        else if(length>7) 
        {
           
            printf("%c%d%c\n",string1[i][0], length-2, string1[i][length-1]);
        }
        else
        {
            printf("%s is palindrom\n",string1[i]);
        }
    }
    return 0;
}