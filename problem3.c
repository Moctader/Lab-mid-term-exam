#include<stdio.h>
#include<string.h>

int main()
{   

    int N, M;
    int i,j;
    printf("enter row and column number\n");
    scanf("%d%d", &N,&M);

    int Arr[N][M];
    printf("Enter the element of the matrix\n");

    for(i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
        {
           scanf("%d", &Arr[i][j]);
        }
    }

    for(i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
        {
          if (i==0 && j==0)
          {
           Arr[i][j]+=3;
          }
          else if (i==0 && j>0)
          {
            Arr[i][j]+=2;
          }
          else if (i>0 && j==0)
          {
            Arr[i][j]+=1;
          }
          
        }
        printf("\n");
    }


    for(i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
        {
           printf("%d ", Arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}