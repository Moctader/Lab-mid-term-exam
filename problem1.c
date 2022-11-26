

#include<stdio.h>
#include<string.h>

int main()
{
    int N, result;
    scanf("%d",&N);

    if(N%3==0)
    {
        result=(N/3);
        printf("%d", result);
    }
    else
        printf("-1");
    return 0;
}