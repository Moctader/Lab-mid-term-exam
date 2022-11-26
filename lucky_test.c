#include<stdio.h>
#include<string.h>
#include<stdlib.h>



int main()
{
    int T, i, x,k,j, len, right;
    scanf("%d", &T);
    char sen[T][1000];
    //char temp[T][1000];
    char temp[T][1000];
    right=len-1;


    for(i=1; i<=T;i++)
    {
       scanf("%s", sen[i]);
       
       //printf("%d",len);

       
    }
    // for(i=1; i<=T;i++)
    // {
    // len=strlen(sen[i]);
    // for (j=0; j<right; j++)
    //     {
    //         temp[i][j]=sen[i][j];
    //         sen[i][j]=sen[i][right];
    //         sen[i][right]=temp;
    //         right--;
    //         printf("%s",temp);

    //     }

    // }

   
    



    // for(i=1; i<=T;i++)
    // {
    //    strcpy(temp[i],sen[i]);
    //    //printf("%s\n",temp[i]);
    //    //printf("%s\n",strrev(sen[i]));
       
       
    // }

    // for(i=x-1; i>=0;i--)
    // {
        
    //     x=strlen(temp[i])-1;
    //    strcpy(reverse_temp[i],temp[i]);
    //    printf("%s\n",reverse_temp[i]);
       
    // }
    //int flag=0;

    // for(i=1; i<=T;i++)
    // {
    //     x=strlen(sen[i]);
    //     k=0;
    //     for(k=0; x>k; k++)
    //     {
    //         if(sen[i][k]!=sen[i][x-k-1])
    //         {
    //             flag=1;
    //             break;
               
    //         }
    //         if (flag)
    //         {
    //             printf("\nis not palindrom"); 
    //         }
    //         else
    //         {
    //             printf("\nis palindrom"); 
    //         }
            

    //     }
       


    // }
        

    // for(i=1; i<=T;i++)
    // {

       
    //    if (x>7)
    //    {
    //        printf("%c%d%c\n",sen[i][0], x-2, sen[i][x-1]);
    //    }
    // }
       





 

    return 0;
}