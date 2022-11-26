#include<stdio.h>
#include<string.h>


int main()
{   

    // user input using gets function and store in s[20]array

    char s[20];
    gets(s);
    int i, a,b, sum=0;
    int c=0;

    // array length count using this function

    for(i =0; s[i]!='\0'; i++)
    {
        c++;
    }
  
    // variable input
    scanf("%d %d", &a, &b);
  
    // According to the condition 
    
    for (i=0; i<c; i++)
    {
        if(s[i]=='+')
        {
            sum+=a+b;
            
        }
        else if(s[i]=='*')
        {
            sum+=a*b;
        }
        
    }
    printf("%d", sum);
}