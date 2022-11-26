#include<stdio.h>
#include<string.h>

int main()
{
    int N, i, counter=0;
    scanf("%d", &N);
    char arr[N];
    scanf("%s", arr);
    int length=strlen(arr);
    //printf("%d",length);
    int max=0;

    for(i=0; i<=length-2; ++i)
    {
        //counter=1;
        if (arr[i]==arr[i+1])
        {
            counter++;
        }
        if (counter>max)
        {
            max=counter;
        }
        // counter=1;
        
        
    }
    if (counter>max)
    {
        max=counter;
    }

    printf("%d", max);
    

    return 0;
}