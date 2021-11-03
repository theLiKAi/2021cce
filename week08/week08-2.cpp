#include <stdio.h>
int main()
    {
        int n,p=0;
        scanf("%d",&n);
        for(int i=2;i<n;i++)
        {
        if(n%i==0) p=1;
        }
        if(p==0) printf("%d yes",n);
        else printf("%d no",n);
        }
