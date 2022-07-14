	#include <stdio.h>
	int main()
	{
		int a[20][20];
		int n;
		int x,y;
		for(int i=1; i<20; i++)
		{
			for(int j=1; j<20; j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		
		scanf("%d",&n);
		for(int i=0; i<n; i++)
		{
			scanf("%d %d",&x,&y);
			for(int j=1; j<20; j++)
			{
				if(a[x][j]==0)
				{
					a[x][j] = 1;
					continue;
				}
				else
				{
					a[x][j] = 0;
					continue;
				}
    		}
			for(int k=1; k<20; k++)
			{
				if(a[k][y]==0)
				{
				    a[k][y]=1;
				    continue;
				}
				else 
				{
				    a[k][y]=0;
				    continue;
				}
			}
		}
		for(int i=1; i<20; i++)
		{
			for(int j=1; j<20; j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		return 0;
		
	}
