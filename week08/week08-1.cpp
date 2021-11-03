#include <stdio.h>
int main()
	{
		int n,a=1,b=0;
		scanf("%d",&n);
		for (int i=1;i<=n;i++)
		{	a *=i;
			b +=a;
			}
			printf("%d",b);
			}
