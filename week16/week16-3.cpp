#include <stdio.h>
char line[300];
int main()
{
    printf("輸入3個數字:-256,0.0000,101010101010111010\n");
    int n;
    float f;
    scanf("%d%f%s",&n,&f,line);
    printf("數字n:%d\n",n);
    printf("數字f:%f\n",f);
    printf("數字line:%s\n",line);
    }
