#include <stdio.h>
int f(int n)
{	int a=0;
	while(n>0)
	{
		a=a+n%10;
		n=n/10;
		}
		return a;
		}
		int main()
		{
			int s;
			while(scanf("%d",&s)==1)
			{
			 if(s==0) break;
			 int ans = f(f(f(s)));
			 printf("%d\n",ans);
			 }
			 }
