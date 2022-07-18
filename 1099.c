	#include <stdio.h>
	int main()
	{
		int a[100][100];
		int k=2;
		int m;
		for(int i=1; i<11; i++)
		{
			for(int j=1; j<11; j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		for(int i=2; i<11; i++)
		{
			for(int j=k; j<11; j++)
			{
			    if(a[i][j]==2)
			    {
			        m=1;
			    }
				a[i][j] = 9;
				if(a[i][j+1]==1)
				{
					k=j;
					break;
				}
			}
			if(a[i+1][k]==0 && a[i][k+1]==0)
			{
				break;
			}
			if(m==1)
			{
				break;
			}
			
		}
		for(int i=1; i<11; i++)
		{
			for(int j=1; j<11; j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		return 0;
	}