	#include <stdio.h>
	int main()
	{
		int n;
		scanf("%d",&n);
		int a[n][n];
		int i;
		int j=0;
		int x=1;
		for(i=0; i<n; i++)
		{
			if(i%2==0)
			{
				for(j=0; j<n; j++)
				{
					a[j][i] = x++;

				}
			}
			else if(i%2==1)
			{
				for(j=n-1; j>=0; j--)
				{
					a[j][i] = x++;
				}
			}
		}
		for(int k=0; k<n; k++)
		{
			for(int m=0; m<n; m++)
			{
				printf("%d ",a[k][m]);
			}
			printf("\n");
		}
		return 0;
		
	}
