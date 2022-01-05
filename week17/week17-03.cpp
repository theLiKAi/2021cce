#include <stdio.h>
int main()
{
    int N=123456789,a=0;
    while(N>0) {
            printf("%d=> %d %d\n",N,N/10,N%10);
            a=a+N%10;
    N=N/10;

    }
    printf("%d",a);
    }
