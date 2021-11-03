#include <stdio.h>
int main()
    {for(int n=2;n<=100;n++)
        {
           int i=0;
            for(int a=2;a<n;a++)
                {if (n%a==0) i=1;
                }
                if (i==0) printf("%d \n",n);
                }
    }
