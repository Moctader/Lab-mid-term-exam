#include<stdio.h>
#include<string.h>



int main()
{
    int n;
    scanf("%d", &n);
    char sen[n][1000];
    for(int i=0; i<n;i++)
        //fgets(sen[i], sizeof(sen[i]), stdin);
       scanf("%s", sen[i]);
    for(int i=0; i<n;i++)
        printf("%s ", sen[i]);


    return 0;
}