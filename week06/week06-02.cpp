#include <stdio.h>
int main()
{
    int a=100,s=200,temp;
    printf("a:%d,s=%d\n",a,s);
    temp=a,a=s,s=temp;
    printf("a:%d,s=%d",a,s);
    }
