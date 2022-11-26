#include<stdio.h>
#include<string.h>

int main()
{
    int T,i,j;
    int N;
    char s[N];
    scanf("%d", &T);
    int count=0;

    //input the values 
    while (T-->0)
    {   
        printf("\nEnter the values of N\n");
        scanf("%d", &N);

        for(i=0; i<N; i++)
        {
            scanf("%s", &s[i]);
        }
       



    }

    int to_find[]={1,0};
    
    for(i=0; i<N; i++)
    {
        if (s[i]==to_find)
        {
            count++;
        }
        
    }
    printf("%d", count);
    
    



 
 

    return 0;
}




