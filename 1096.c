	#include <stdio.h>
	int main()
	{
		int n;
		scanf("%d",&n);
		int a[20][20] = {};
		int x,y;
		for(int i=0; i<n; i++)
		{
			scanf("%d %d",&x,&y);
			a[x][y] = 1;
		}
		for(int k=1; k<20; k++)
		{
			for(int m=1; m<20; m++)
			{
				printf("%d ",a[k][m]);
			}
			printf("\n");
		}
		return 0;
	}
