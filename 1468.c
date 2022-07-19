	#include <stdio.h>
	int main()
	{
		int a[110][110];
		int n;
		int x=1;
		scanf("%d",&n);
		for(int i=0; i<n; i++)
		{
			if(i%2==0)
			{
				for(int j=0; j<n; j++)
				{
					a[i][j] = x++;
				}
			}
			else if(i%2==1)
			{
				for(int j=n-1; j>=0; j--)
				{
					a[i][j] = x++;
				}
			}
		}
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("\n");
			
		}
		return 0;
	}