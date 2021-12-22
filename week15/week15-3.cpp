#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int c=a%b;
    printf("a 大%d b中%d c小%d",a,b,c);
    while(1)
    {   if(c==0) break;
        a=b;
        b=c;
        c=a%b;
        printf("a 大%d b中%d c小%d",a,b,c);
                }
                printf("C是0,離開迴圈,答案是中間的b");
        printf("%d",b);
        }
