#include<stdio.h>
#include<string.h>


int main()
{
    int N, i, j, k;
    
    scanf("%d",&N);
    //printf("value%d",N);
    
    int arr[N];
    int result[100];

    for(i=0; i<N; i++)
    {
        scanf("%d", & arr[i]);
    }

    //Max Array element find
    int maxx=arr[0];
    for(i=0; i<N; i++)
    {
        if (arr[i]%2==0 && arr[i]>maxx)
        {
            maxx=arr[i];
            
        }
        
    }
    //printf("%d ", maxx);

    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {    
            if(arr[i]!=arr[j])
        {
                result[i]=arr[i]+arr[j];
               printf("%d  ", result[i]);
        }


        }
        
    }


    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {    
            if(result[i]%2==0 && result[i]>maxx)
                maxx=result[i];

        }
        
    }

    printf("\n%d",maxx);


    return 0;
}