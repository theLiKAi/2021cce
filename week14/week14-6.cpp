#include <stdio.h>
int a[100][100];
int main()
{
	int M,N;
	scanf("%d%d",&M,&N);
	printf("\n");
	for(int i=0;i<M;i++)
	{
		for(int j=0;j<N;j++)
		{
			scanf("%d",&a[i][j]);
			}
			}
			for(int j=0;j<N;j++)
	{
		for(int i=M-1;i>=0;i--)
		{
			printf("%2d ",a[i][j]);
			}
			printf("\n");
			}
			}
