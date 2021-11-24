#include <stdio.h>
int a[10000000]={};
int main()
{
    int m;
    scanf("%d",&m);
    int ans=0;
    for(int i=2;ans<m;i++)
    {
        if(a[i]==0) {
        ans++;
        printf("%d ",i);}
        for(int k=i+i;k<10000000;k=k+i)
        {
            a[k]=1;
            }
            }
            }
