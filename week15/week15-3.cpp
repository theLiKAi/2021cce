#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int c=a%b;
    printf("a �j%d b��%d c�p%d",a,b,c);
    while(1)
    {   if(c==0) break;
        a=b;
        b=c;
        c=a%b;
        printf("a �j%d b��%d c�p%d",a,b,c);
                }
                printf("C�O0,���}�j��,���׬O������b");
        printf("%d",b);
        }
